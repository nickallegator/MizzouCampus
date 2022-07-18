// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

Shader "Graphics Tools/Experimental/Acrylic/Canvas Backplate" {

Properties {

    [Header(Round Rect)]
        _Base_Color_("Base Color", Color) = (0,0,0,1)
        [Toggle(_LINE_DISABLED_)] _Line_Disabled_("Line Disabled", Float) = 0
        _Line_Width_("Line Width", Range(0,10)) = 1
        _Line_Color_("Line Color", Color) = (0,0,0,1)
        _Filter_Width_("Filter Width", Range(0,4)) = 1
     
    [Header(Line Highlight)]
        _Rate_("Rate", Range(0,1)) = 0
        _Highlight_Color_("Highlight Color", Color) = (0.98,0.98,0.98,1)
        _Highlight_Width_("Highlight Width", Range(0,2)) = 0.25
        _Highlight_Transform_("Highlight Transform", Vector) = (1, 1, 0, 0)
        _Highlight_("Highlight", Range(0,1)) = 1
     
    [Header(Iridescence)]
        [Toggle(_IRIDESCENCE_ENABLE_)] _Iridescence_Enable_("Iridescence Enable", Float) = 1
        _Iridescence_Intensity_("Iridescence Intensity", Range(0,1)) = 0
        _Iridescence_Edge_Intensity_("Iridescence Edge Intensity", Range(0,1)) = 0.56
        _Iridescence_Tint_("Iridescence Tint", Color) = (1,1,1,1)
        [NoScaleOffset] _Iridescent_Map_("Iridescent Map", 2D) = "" {}
        _Frequency_("Frequency", Range(0,10)) = 1
        _Vertical_Offset_("Vertical Offset", Range(0,2)) = 0
     
    [Header(Gradient)]
        [Toggle(_GRADIENT_DISABLED_)] _Gradient_Disabled_("Gradient Disabled", Float) = 0
        _Gradient_Color_("Gradient Color", Color) = (0.631373,0.631373,0.631373,1)
        _Top_Left_("Top Left", Color) = (1,0.690196,0.976471,1)
        _Top_Right_("Top Right", Color) = (0.0,0.33,0.88,1)
        _Bottom_Left_("Bottom Left", Color) = (0.0,0.33,0.88,1)
        _Bottom_Right_("Bottom Right", Color) = (1,1,1,1)
        [Toggle(_EDGE_ONLY_)] _Edge_Only_("Edge Only", Float) = 0
        _Line_Gradient_Blend_("Line Gradient Blend", Range(0,1)) = 0.36
     
    [Header(Fade)]
        _Fade_Out_("Fade Out", Range(0,1)) = 1
     
    [Header(Blur Textures)]
        [Toggle(_BLUR_TEXTURE_ENABLE_)] _Blur_Texture_Enable_("Blur Texture Enable", Float) = 1
        [Toggle(_BLUR_TEXTURE_2_ENABLE_)] _Blur_Texture_2_Enable_("Blur Texture 2 Enable", Float) = 0
        _Blur_Texture_Intensity_("Blur Texture Intensity", Range(0,1)) = 1.0
        _Blur_Edge_Intensity_("Blur Edge Intensity", Range(0,1)) = 0.0
        _Fallback_Color_("Fallback Color", Color) = (0,0,0,1)
     
    [Header(Color Texture)]
        [Toggle(_NOISE_ENABLE_)] _Noise_Enable_("Noise Enable", Float) = 0
        _Noise_("Noise", Range(0,1)) = 0.05
        _Noise_Frequency_("Noise Frequency", Range(0,10)) = 1.0
        [NoScaleOffset] _Noise_Texture_("Noise Texture", 2D) = "" {}
     
    [Header(Occlusion)]
        _Occluded_Intensity_("Occluded Intensity", Range(0,1)) = 1
        _Occluded_Blur_Intensity_("Occluded Blur Intensity", Range(0,1)) = 0
        _Occluded_Blur_Edge_Intensity_("Occluded Blur Edge Intensity", Range(0,1)) = 0.0
        [NoScaleOffset] _OccludedTex("OccludedTex", 2D) = "" {}
        _OccludedColor("OccludedColor", Color) = (0,0.5,1,1)
        _GridScale("GridScale", Float) = 0.02
     
    [Header(Antialiasing)]
        [Toggle(_SMOOTH_EDGES_)] _Smooth_Edges_("Smooth Edges", Float) = 0
     

    [Header(Blending)]
        [Enum(UnityEngine.Rendering.BlendMode)] _SrcBlend("Source Blend", Float) = 1       // "One"
        [Enum(UnityEngine.Rendering.BlendMode)] _DstBlend("Destination Blend", Float) = 0  // "Zero"

    [Header(Stencil)]
        _StencilReference("Stencil Reference", Range(0, 255)) = 0
        [Enum(UnityEngine.Rendering.CompareFunction)]_StencilComparison("Stencil Comparison", Int) = 0
        [Enum(UnityEngine.Rendering.StencilOp)]_StencilOperation("Stencil Operation", Int) = 0

    [Header(Depth)]
        [Enum(UnityEngine.Rendering.CompareFunction)] _ZTest("Depth Test", Float) = 4 // "LessEqual"
        [Enum(DepthWrite)] _ZWrite("Depth Write", Float) = 1 // "On"

    [HideInInspector] _MainTex("Texture", 2D) = "white" {} // Added to avoid UnityUI warnings.
    [HideInInspector] _ClipRect("Clip Rect", Vector) = (-32767.0, -32767.0, 32767.0, 32767.0) // Added to avoid SRP warnings.
    [HideInInspector] _ClipRectRadii("Clip Rect Radii", Vector) = (10.0, 10.0, 10.0, 10.0) // Added to avoid SRP warnings.
}

SubShader {
    Tags{ "RenderType" = "Opaque" }
    Blend[_SrcBlend][_DstBlend]
    Tags {"DisableBatching" = "True"}
    Stencil
    {
        Ref[_StencilReference]
        Comp[_StencilComparison]
        Pass[_StencilOperation]
    }

    LOD 100

    CGINCLUDE

    #pragma target 4.0
    #pragma shader_feature_local _ _IRIDESCENCE_ENABLE_
    #pragma shader_feature_local _ _LINE_DISABLED_
    #pragma shader_feature_local _ _GRADIENT_DISABLED_
    #pragma shader_feature_local _ _EDGE_ONLY_
    #pragma shader_feature_local _ _NOISE_ENABLE_
    #pragma shader_feature_local _ _SMOOTH_EDGES_

    #pragma multi_compile_local _ _BLUR_TEXTURE_ENABLE_
    #pragma multi_compile_local _ _BLUR_TEXTURE_2_ENABLE_

    #pragma multi_compile_local _ UNITY_UI_CLIP_RECT
    #pragma multi_compile_local _ _UI_CLIP_RECT_ROUNDED _UI_CLIP_RECT_ROUNDED_INDEPENDENT

    #include "UnityCG.cginc"
    #include "../../../Shaders/GraphicsToolsCommon.hlsl"



CBUFFER_START(UnityPerMaterial)
    half4 _Base_Color_;
    //bool _Line_Disabled_;
    float _Line_Width_;
    half4 _Line_Color_;
    half _Filter_Width_;
    float _Rate_;
    half4 _Highlight_Color_;
    half _Highlight_Width_;
    float4 _Highlight_Transform_;
    half _Highlight_;
    //bool _Iridescence_Enable_;
    float _Iridescence_Intensity_;
    float _Iridescence_Edge_Intensity_;
    half4 _Iridescence_Tint_;
    sampler2D _Iridescent_Map_;
    half _Frequency_;
    half _Vertical_Offset_;
    //bool _Gradient_Disabled_;
    half4 _Gradient_Color_;
    half4 _Top_Left_;
    half4 _Top_Right_;
    half4 _Bottom_Left_;
    half4 _Bottom_Right_;
    //bool _Edge_Only_;
    half _Line_Gradient_Blend_;
    float _Fade_Out_;
    //bool _Blur_Texture_Enable_;
    //bool _Blur_Texture_2_Enable_;
    half _Blur_Texture_Intensity_;
    half _Blur_Edge_Intensity_;
    half4 _Fallback_Color_;
    //bool _Noise_Enable_;
    float _Noise_;
    float _Noise_Frequency_;
    sampler2D _Noise_Texture_;
    half _Occluded_Intensity_;
    half _Occluded_Blur_Intensity_;
    half _Occluded_Blur_Edge_Intensity_;
    sampler2D _OccludedTex;
    half4 _OccludedColor;
    float _GridScale;
    //bool _Smooth_Edges_;
    // #if defined(UNITY_UI_CLIP_RECT)
    float4 _ClipRect;
    // #if defined(_UI_CLIP_RECT_ROUNDED) || defined(_UI_CLIP_RECT_ROUNDED_INDEPENDENT)
    float4 _ClipRectRadii;

CBUFFER_END


    struct VertexInput {
        float4 vertex : POSITION;
        half3 normal : NORMAL;
        float2 uv0 : TEXCOORD0;
        float2 uv2 : TEXCOORD2;
        float2 uv3 : TEXCOORD3;
        float4 tangent : TANGENT;
        float4 color : COLOR;
        UNITY_VERTEX_INPUT_INSTANCE_ID
    };

    struct VertexOutput {
        float4 pos : SV_POSITION;
#ifdef UNITY_UI_CLIP_RECT
        float3 posLocal : TEXCOORD8;
#endif
        half4 normalWorld : TEXCOORD5;
        float2 uv : TEXCOORD0;
        float3 posWorld : TEXCOORD7;
        float4 tangent : TANGENT;
        float4 binormal : TEXCOORD6;
        float4 vertexColor : COLOR;
        float4 extra1 : TEXCOORD4;
        float4 extra2 : TEXCOORD3;
        float4 extra3 : TEXCOORD2;
      UNITY_VERTEX_OUTPUT_STEREO
    };

    UNITY_DECLARE_SCREENSPACE_TEXTURE(_blurTexture);
    UNITY_DECLARE_SCREENSPACE_TEXTURE(_blurTexture2);
    
    //BLOCK_BEGIN Round_Rect_Vertex 351

    void Round_Rect_Vertex_B351(
        float2 UV,
        float Radius,
        float Anisotropy,
        out float2 Rect_UV,
        out float4 Rect_Parms,
        out float2 Scale_XY,
        out float2 Line_UV    )
    {
        Scale_XY = float2(Anisotropy,1.0);
        Line_UV = (UV - float2(0.5,0.5));
        Rect_UV = Line_UV * Scale_XY;
        Rect_Parms.xy = Scale_XY*0.5-float2(Radius,Radius);
        Rect_Parms.z = 0.0;
        Rect_Parms.w = 0.0;
        
    }
    //BLOCK_END Round_Rect_Vertex

    //BLOCK_BEGIN ScreenPosition 377

    void ScreenPosition_B377(
        float3 Position,
        out float3 ScreenPos    )
    {
        float4 screenPos = ComputeScreenPos(mul(UNITY_MATRIX_VP, float4(Position, 1)));
#if defined(UNITY_UV_STARTS_AT_TOP)
        screenPos.y = unity_OrthoParams.w ? 1.0 - screenPos.y : screenPos.y;
#else
        screenPos.y = unity_OrthoParams.w ? screenPos.y : 1.0 - screenPos.y;
#endif
        ScreenPos = float3(screenPos.x,screenPos.y,screenPos.w);
    }
    //BLOCK_END ScreenPosition

    //BLOCK_BEGIN Gradient 459

    void Gradient_B459(
        half4 Gradient_Color,
        half4 Top_Left,
        half4 Top_Right,
        half4 Bottom_Left,
        half4 Bottom_Right,
        half2 UV,
        out half3 Result    )
    {
        half3 top = Top_Left.rgb + (Top_Right.rgb - Top_Left.rgb)*UV.x;
        half3 bottom = Bottom_Left.rgb + (Bottom_Right.rgb - Bottom_Left.rgb)*UV.x;
        Result = Gradient_Color.rgb * (bottom + (top - bottom)*UV.y);
        
    }
    //BLOCK_END Gradient

    //BLOCK_BEGIN Line_Vertex 358

    void Line_Vertex_B358(
        float2 Scale_XY,
        float2 UV,
        float Time,
        float Rate,
        float4 Highlight_Transform,
        out float4 Line_Vertex    )
    {
        float angle2 = (Rate*Time) * 2.0 * 3.1416;
        float sinAngle2 = sin(angle2);
        float cosAngle2 = cos(angle2);
        float2 xformUV = UV * Highlight_Transform.xy + Highlight_Transform.zw;
        Line_Vertex.x = 0.0;
        Line_Vertex.y = 0.0;
        Line_Vertex.z = cosAngle2*xformUV.x-sinAngle2*xformUV.y;
        Line_Vertex.w = 0.0; //sinAngle2*xformUV.x+cosAngle2*xformUV.y;
    }
    //BLOCK_END Line_Vertex

    //BLOCK_BEGIN RelativeOrAbsoluteDetail 378

    void RelativeOrAbsoluteDetail_B378(
        float Nominal_Radius,
        float Nominal_LineWidth,
        bool Absolute_Measurements,
        float Height,
        out float Radius,
        out float Line_Width    )
    {
        float scale = Absolute_Measurements ? 1.0/Height : 1.0;
        Radius = Nominal_Radius * scale;
        Line_Width = Nominal_LineWidth * scale;
    }
    //BLOCK_END RelativeOrAbsoluteDetail

    //BLOCK_BEGIN Edge_AA_Vertex 409

    void Edge_AA_Vertex_B409(
        float3 Position_World,
        float3 Normal_Object,
        float3 Eye,
        float3 Tangent,
        out float Gradient1,
        out float Gradient2    )
    {
        float3 I = (Eye-Position_World);
        float3 T = UnityObjectToWorldNormal(Tangent);
        float g = (dot(T,I)<=0.0) ? 0.0 : 1.0;
        if (Normal_Object.z==0) { // edge
            Gradient1 = Tangent.z>0.0 ? g : 1.0;
            Gradient2 = Tangent.z>0.0 ? 1.0 : g;
        } else {
            Gradient1 = (unity_OrthoParams.w) ? (Tangent.z==0 ? 0 : 1) : g;
            Gradient2 = 1.0;
        }
    }
    //BLOCK_END Edge_AA_Vertex


    VertexOutput vert(VertexInput vertInput)
    {
        UNITY_SETUP_INSTANCE_ID(vertInput);
        VertexOutput o;
        UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);

        // Object_To_World_Pos (#347)
        float3 Pos_World_Q347=(mul(UNITY_MATRIX_M, float4(vertInput.vertex.xyz*float3(float2(1,1).x, float2(1,1).y, 1.0), 1)));

        // Object_To_World_Dir (#353)
        float3 Nrm_World_Q353;
        #if defined(_IRIDESCENCE_ENABLE_)
          Nrm_World_Q353 = normalize((mul((float3x3)UNITY_MATRIX_M, vertInput.normal)));
          
        #else
          Nrm_World_Q353 = float3(0,0,1);
        #endif

        float3 ScreenPos_Q377;
        ScreenPosition_B377(Pos_World_Q347,ScreenPos_Q377);

        // Scale_Color (#415)
        float4 Result_Q415 = _Fade_Out_ * vertInput.color;

        // To_XY (#341)
        float X_Q341;
        float Y_Q341;
        X_Q341 = vertInput.uv3.x;
        Y_Q341 = vertInput.uv3.y;

        half3 Result_Q459;
        #if defined(_EDGE_ONLY_)
          Gradient_B459(_Gradient_Color_,_Top_Left_,_Top_Right_,_Bottom_Left_,_Bottom_Right_,vertInput.uv0,Result_Q459);
        #else
          Result_Q459 = half3(0,0,0);
        #endif

        // Permutation_To_Bool (#458)
        bool Bool_Q458;
        #if defined(_GRADIENT_DISABLED_)
          Bool_Q458 = true;
        #else
          Bool_Q458 = false;
        #endif

        // To_XY (#336)
        float X_Q336;
        float Y_Q336;
        X_Q336 = vertInput.uv0.x;
        Y_Q336 = vertInput.uv0.y;

        // To_XYZ (#423)
        float X_Q423;
        float Y_Q423;
        float Z_Q423;
        X_Q423=vertInput.vertex.xyz.x;
        Y_Q423=vertInput.vertex.xyz.y;
        Z_Q423=vertInput.vertex.xyz.z;
        
        float Gradient1_Q409;
        float Gradient2_Q409;
        #if defined(_SMOOTH_EDGES_)
          Edge_AA_Vertex_B409(Pos_World_Q347,vertInput.normal,_WorldSpaceCameraPos,vertInput.tangent,Gradient1_Q409,Gradient2_Q409);
        #else
          Gradient1_Q409 = 1;
          Gradient2_Q409 = 1;
        #endif

        // To_XY (#338)
        float X_Q338;
        float Y_Q338;
        X_Q338 = vertInput.uv2.x;
        Y_Q338 = vertInput.uv2.y;

        // Conditional_Vec3 (#460)
        float3 Result_Q460 = Bool_Q458 ? float3(0,0,0) : Result_Q459;

        // From_XYZW (#413)
        float4 Vec4_Q413 = float4(X_Q423, Y_Q423, Gradient1_Q409, Gradient2_Q409);

        // Divide (#326)
        float Anisotropy_Q326 = X_Q338 / Y_Q338;

        float Radius_Q378;
        float Line_Width_Q378;
        RelativeOrAbsoluteDetail_B378(0.0,_Line_Width_,true,Y_Q338,Radius_Q378,Line_Width_Q378);

        float2 Rect_UV_Q351;
        float4 Rect_Parms_Q351;
        float2 Scale_XY_Q351;
        float2 Line_UV_Q351;
        Round_Rect_Vertex_B351(vertInput.uv0,X_Q341,Anisotropy_Q326,Rect_UV_Q351,Rect_Parms_Q351,Scale_XY_Q351,Line_UV_Q351);

        // From_XYZW (#335)
        float4 Vec4_Q335 = float4(X_Q336, Y_Q336, X_Q341, Line_Width_Q378);

        float4 Line_Vertex_Q358;
        #if defined(_LINE_DISABLED_)
          Line_Vertex_Q358 = float4(0,0,0,0);
        #else
          Line_Vertex_B358(Scale_XY_Q351,Line_UV_Q351,_Time.y,_Rate_,_Highlight_Transform_,Line_Vertex_Q358);
        #endif

        // Add4 (#350)
        float4 Sum4_Q350 = Rect_Parms_Q351 + Line_Vertex_Q358;

        float3 Position = Pos_World_Q347;
        float3 Normal = Nrm_World_Q353;
        float2 UV = Rect_UV_Q351;
        float3 Tangent = Result_Q460;
        float3 Binormal = ScreenPos_Q377;
        float4 Color = Result_Q415;
        float4 Extra1 = Sum4_Q350;
        float4 Extra2 = Vec4_Q335;
        float4 Extra3 = Vec4_Q413;

        o.pos = mul(UNITY_MATRIX_VP, float4(Position,1));
#ifdef UNITY_UI_CLIP_RECT
        o.posLocal = vertInput.vertex.xyz;
#endif
        o.posWorld = Position;
        o.normalWorld.xyz = Normal; o.normalWorld.w=1.0;
        o.uv = UV;
        o.tangent.xyz = Tangent; o.tangent.w=1.0;
        o.binormal.xyz = Binormal; o.binormal.w=1.0;
        o.vertexColor = Color;
        o.extra1=Extra1;
        o.extra2=Extra2;
        o.extra3=Extra3;

        return o;
    }

    ENDCG

    Pass
    {
        Name "Default"
    ZWrite[_ZWrite]
    ZTest[_ZTest]

        CGPROGRAM
        #pragma vertex vert
        #pragma fragment frag

    //BLOCK_BEGIN Smooth_Edges 411

    void Smooth_Edges_B411(
        half Filter_Width,
        half4 Rect_Parms,
        out half Inside_Rect    )
    {
        float g = min(Rect_Parms.z,Rect_Parms.w);
        float dgrad = max(fwidth(g)*Filter_Width,0.001);
        Inside_Rect = saturate(g/dgrad);
    }
    //BLOCK_END Smooth_Edges

    //BLOCK_BEGIN Round_Rect_Fragment 443

    void Round_Rect_Fragment_B443(
        half Radius,
        half Line_Width,
        half Filter_Width,
        float2 UV,
        float4 Rect_Parms,
        out half InLine    )
    {
        half d = length(max(abs(UV)-Rect_Parms.xy,0.0));
        half dx = max(fwidth(d)*Filter_Width,0.001);
        InLine = saturate((d+dx*0.5-max(Radius-Line_Width,d-dx*0.5))/dx);
        
    }
    //BLOCK_END Round_Rect_Fragment

    //BLOCK_BEGIN Iridescence 445

    void Iridescence_B445(
        half3 Position,
        half3 Normal,
        half2 UV,
        half3 Eye,
        half4 Tint,
        sampler2D Texture,
        half Frequency,
        half Vertical_Offset,
        out half3 Color    )
    {
        
        half3 i = normalize(Position-Eye);
        half3 r = reflect(i,Normal);
        half x = dot(i,r);
        
        half2 xy;
        xy.x = frac((x*Frequency+1.0)*0.5 + UV.y*Vertical_Offset);
        xy.y = 0.5;
        
        Color = tex2D(Texture,xy).rgb;
        Color *= Tint.rgb;
    }
    //BLOCK_END Iridescence

    //BLOCK_BEGIN Line_Fragment 356

    void Line_Fragment_B356(
        half4 Base_Color,
        half4 Highlight_Color,
        half Highlight_Width,
        half4 Line_Vertex,
        half Highlight,
        out half4 Line_Color    )
    {
        half k2 = 1.0-saturate(abs(Line_Vertex.z/Highlight_Width));
        Line_Color = lerp(Base_Color,Highlight_Color,float4(Highlight*k2,Highlight*k2,Highlight*k2,Highlight*k2));
    }
    //BLOCK_END Line_Fragment

    //BLOCK_BEGIN Gradient 442

    void Gradient_B442(
        half4 Gradient_Color,
        half4 Top_Left,
        half4 Top_Right,
        half4 Bottom_Left,
        half4 Bottom_Right,
        half2 UV,
        out half3 Gradient    )
    {
        half3 top = Top_Left.rgb + (Top_Right.rgb - Top_Left.rgb)*UV.x;
        half3 bottom = Bottom_Left.rgb + (Bottom_Right.rgb - Bottom_Left.rgb)*UV.x;
        Gradient = Gradient_Color.rgb * (bottom + (top - bottom)*UV.y);
    }
    //BLOCK_END Gradient


    half4 frag(VertexOutput fragInput) : SV_Target
    {
    #ifdef UNITY_UI_CLIP_RECT
        clip(GTUnityUIClipRect(fragInput.posLocal.xy, _ClipRect, _ClipRectRadii) - 0.5);
    #endif
        UNITY_SETUP_STEREO_EYE_INDEX_POST_VERTEX(fragInput);
        half4 result;

        half Inside_Rect_Q411;
        #if defined(_SMOOTH_EDGES_)
          Smooth_Edges_B411(1,fragInput.extra3,Inside_Rect_Q411);
        #else
          Inside_Rect_Q411 = 1.0;
        #endif

        // To_XYZW (#327)
        float X_Q327;
        float Y_Q327;
        float Z_Q327;
        float W_Q327;
        X_Q327=fragInput.extra2.x;
        Y_Q327=fragInput.extra2.y;
        Z_Q327=fragInput.extra2.z;
        W_Q327=fragInput.extra2.w;

        half3 Color_Q445;
        #if defined(_IRIDESCENCE_ENABLE_)
          Iridescence_B445(fragInput.posWorld,fragInput.normalWorld.xyz,fragInput.uv,_WorldSpaceCameraPos,_Iridescence_Tint_,_Iridescent_Map_,_Frequency_,_Vertical_Offset_,Color_Q445);
        #else
          Color_Q445 = half3(0,0,0);
        #endif

        half4 Line_Color_Q356;
        #if defined(_LINE_DISABLED_)
          Line_Color_Q356 = half4(0,0,0,1);
        #else
          Line_Fragment_B356(_Line_Color_,_Highlight_Color_,_Highlight_Width_,fragInput.extra1,_Highlight_,Line_Color_Q356);
        #endif

        // Color_Texture (#364)
        half Result_Q364;
        #if defined(_NOISE_ENABLE_)
          Result_Q364 = 1.0 - _Noise_ * tex2D(_Noise_Texture_, fragInput.uv * _Noise_Frequency_).r;
        #else
          Result_Q364 = 1.0;
        #endif

        // Scale3 (#451)
        half3 Result_Q451 = _Iridescence_Intensity_ * Color_Q445;

        // Permutation_To_Bool (#446)
        bool Bool_Q446;
        #if defined(_GRADIENT_DISABLED_)
          Bool_Q446 = true;
        #else
          Bool_Q446 = false;
        #endif

        // From_XY (#328)
        float2 Vec2_Q328 = float2(X_Q327,Y_Q327);

        // ScreenUV (#372)
        float2 ScreenUV_Q372;
        ScreenUV_Q372 = fragInput.binormal.xyz.xy/fragInput.binormal.xyz.z;
        
        half InLine_Q443;
        #if defined(_LINE_DISABLED_)
          InLine_Q443 = 0.0;
        #else
          Round_Rect_Fragment_B443(Z_Q327,W_Q327,_Filter_Width_,fragInput.uv,fragInput.extra1,InLine_Q443);
        #endif

        half3 Gradient_Q442;
        #if defined(_EDGE_ONLY_)
          Gradient_Q442 = half3(0,0,0);
        #else
          Gradient_B442(_Gradient_Color_,_Top_Left_,_Top_Right_,_Bottom_Left_,_Bottom_Right_,Vec2_Q328,Gradient_Q442);
        #endif

        // Color_Texture (#374)
        half4 Color_Q374;
        half Used_Q374;
        #if defined(_BLUR_TEXTURE_ENABLE_)
          Color_Q374 = UNITY_SAMPLE_SCREENSPACE_TEXTURE(_blurTexture, ScreenUV_Q372);
          Used_Q374 = 1.0;
        #else
          Color_Q374 = half4(0,0,0,0);
          Used_Q374 = 0;
        #endif

        // Color_Texture (#376)
        half4 Color_Q376;
        half Used_Q376;
        #if defined(_BLUR_TEXTURE_2_ENABLE_)
          Color_Q376 = UNITY_SAMPLE_SCREENSPACE_TEXTURE(_blurTexture2, ScreenUV_Q372);
          Used_Q376 = 1.0;
        #else
          Color_Q376 = half4(0,0,0,0);
          Used_Q376 = 0.0;
        #endif

        // Add_Colors (#452)
        half3 Interior_Gradient_Q452;
        half3 Edge_Gradient_Q452;
        Interior_Gradient_Q452 = Bool_Q446 ? half3(0,0,0) : Gradient_Q442.rgb;
        Edge_Gradient_Q452 = Bool_Q446 ? half3(0,0,0) : fragInput.tangent.xyz + Gradient_Q442.rgb;

        // Add_Colors (#363)
        half4 Sum_Q363 = Color_Q374 + Color_Q376;

        // Max (#365)
        half MaxAB_Q365=max(Used_Q374,Used_Q376);

        // Mix_Colors (#453)
        half3 Color_At_T_Q453 = Line_Color_Q356.rgb + (Edge_Gradient_Q452-Line_Color_Q356.rgb)*_Line_Gradient_Blend_;

        // Add3 (#447)
        half3 Sum3_Q447 = Interior_Gradient_Q452 + Result_Q451;

        // Mix_Colors (#366)
        half3 Color_At_T_Q366 = lerp(_Fallback_Color_.rgb, Sum_Q363.rgb,float4( MaxAB_Q365, MaxAB_Q365, MaxAB_Q365, MaxAB_Q365));

        // Add_Scaled_Color (#450)
        half3 Sum_Q450 = Color_At_T_Q453 + _Iridescence_Edge_Intensity_ * Color_Q445;

        // Add_Colors (#449)
        half3 Base_And_Iridescent_Q449 = _Base_Color_.rgb + Sum3_Q447;

        // Scale3 (#473)
        half3 Result_Q473 = Result_Q364 * Color_At_T_Q366;

        // Scale3 (#471)
        half3 Result_Q471 = _Blur_Edge_Intensity_ * Result_Q473;

        // Scale3 (#467)
        half3 Result_Q467 = _Blur_Texture_Intensity_ * Result_Q473;

        // Add3 (#469)
        half3 Sum3_Q469 = Sum_Q450 + Result_Q471;

        // Add3 (#465)
        half3 Sum3_Q465 = Base_And_Iridescent_Q449 + Result_Q467;

        // Mix3 (#448)
        half3 V_T_Q448 = lerp(Sum3_Q465,Sum3_Q469,float3(InLine_Q443,InLine_Q443,InLine_Q443));

        // Set_Alpha (#444)
        half4 Result_Q444 = half4(V_T_Q448, 1);

        // Multiply_Colors (#417)
        half4 Product_Q417 = fragInput.vertexColor * Result_Q444;

        // Scale_Color (#334)
        half4 Result_Q334 = Inside_Rect_Q411 * Product_Q417;

        float4 Out_Color = Result_Q334;
        float Clip_Threshold = 0.001;

        result = Out_Color;
        return result;
    }

    ENDCG
  }

    Pass
    {
        Name "Occluded"
        Tags { "LightMode" = "UIOccluded" }
        ZTest Greater

        CGPROGRAM
        #pragma vertex vert
        #pragma fragment secondFragment

        //BLOCK_BEGIN Smooth_Edges 411

        void Smooth_Edges_B411(
            half Filter_Width,
            half4 Rect_Parms,
            out half Inside_Rect        )
        {
            float g = min(Rect_Parms.z,Rect_Parms.w);
            float dgrad = max(fwidth(g)*Filter_Width,0.001);
            Inside_Rect = saturate(g/dgrad);
        }
        //BLOCK_END Smooth_Edges

        //BLOCK_BEGIN Round_Rect_Fragment 443

        void Round_Rect_Fragment_B443(
            half Radius,
            half Line_Width,
            half Filter_Width,
            float2 UV,
            float4 Rect_Parms,
            out half InLine        )
        {
            half d = length(max(abs(UV)-Rect_Parms.xy,0.0));
            half dx = max(fwidth(d)*Filter_Width,0.001);
            InLine = saturate((d+dx*0.5-max(Radius-Line_Width,d-dx*0.5))/dx);
            
        }
        //BLOCK_END Round_Rect_Fragment

        //BLOCK_BEGIN Iridescence 445

        void Iridescence_B445(
            half3 Position,
            half3 Normal,
            half2 UV,
            half3 Eye,
            half4 Tint,
            sampler2D Texture,
            half Frequency,
            half Vertical_Offset,
            out half3 Color        )
        {
            
            half3 i = normalize(Position-Eye);
            half3 r = reflect(i,Normal);
            half x = dot(i,r);
            
            half2 xy;
            xy.x = frac((x*Frequency+1.0)*0.5 + UV.y*Vertical_Offset);
            xy.y = 0.5;
            
            Color = tex2D(Texture,xy).rgb;
            Color *= Tint.rgb;
        }
        //BLOCK_END Iridescence

        //BLOCK_BEGIN Line_Fragment 356

        void Line_Fragment_B356(
            half4 Base_Color,
            half4 Highlight_Color,
            half Highlight_Width,
            half4 Line_Vertex,
            half Highlight,
            out half4 Line_Color        )
        {
            half k2 = 1.0-saturate(abs(Line_Vertex.z/Highlight_Width));
            Line_Color = lerp(Base_Color,Highlight_Color,float4(Highlight*k2,Highlight*k2,Highlight*k2,Highlight*k2));
        }
        //BLOCK_END Line_Fragment

        //BLOCK_BEGIN Gradient 442

        void Gradient_B442(
            half4 Gradient_Color,
            half4 Top_Left,
            half4 Top_Right,
            half4 Bottom_Left,
            half4 Bottom_Right,
            half2 UV,
            out half3 Gradient        )
        {
            half3 top = Top_Left.rgb + (Top_Right.rgb - Top_Left.rgb)*UV.x;
            half3 bottom = Bottom_Left.rgb + (Bottom_Right.rgb - Bottom_Left.rgb)*UV.x;
            Gradient = Gradient_Color.rgb * (bottom + (top - bottom)*UV.y);
        }
        //BLOCK_END Gradient


        half4 secondFragment(VertexOutput fragInput) : SV_Target
        {
    #ifdef UNITY_UI_CLIP_RECT
        clip(GTUnityUIClipRect(fragInput.posLocal.xy, _ClipRect, _ClipRectRadii) - 0.5);
    #endif
        UNITY_SETUP_STEREO_EYE_INDEX_POST_VERTEX(fragInput);
        half4 result;

        half Inside_Rect_Q411;
        #if defined(_SMOOTH_EDGES_)
          Smooth_Edges_B411(1,fragInput.extra3,Inside_Rect_Q411);
        #else
          Inside_Rect_Q411 = 1.0;
        #endif

        // To_XYZW (#327)
        float X_Q327;
        float Y_Q327;
        float Z_Q327;
        float W_Q327;
        X_Q327=fragInput.extra2.x;
        Y_Q327=fragInput.extra2.y;
        Z_Q327=fragInput.extra2.z;
        W_Q327=fragInput.extra2.w;

        half3 Color_Q445;
        #if defined(_IRIDESCENCE_ENABLE_)
          Iridescence_B445(fragInput.posWorld,fragInput.normalWorld.xyz,fragInput.uv,_WorldSpaceCameraPos,_Iridescence_Tint_,_Iridescent_Map_,_Frequency_,_Vertical_Offset_,Color_Q445);
        #else
          Color_Q445 = half3(0,0,0);
        #endif

        // To_XYZW (#424)
        float X_Q424;
        float Y_Q424;
        float Z_Q424;
        float W_Q424;
        X_Q424=fragInput.extra3.x;
        Y_Q424=fragInput.extra3.y;
        Z_Q424=fragInput.extra3.z;
        W_Q424=fragInput.extra3.w;

        // Scale3 (#451)
        half3 Result_Q451 = _Iridescence_Intensity_ * Color_Q445;

        half4 Line_Color_Q356;
        #if defined(_LINE_DISABLED_)
          Line_Color_Q356 = half4(0,0,0,1);
        #else
          Line_Fragment_B356(_Line_Color_,_Highlight_Color_,_Highlight_Width_,fragInput.extra1,_Highlight_,Line_Color_Q356);
        #endif

        // Permutation_To_Bool (#446)
        bool Bool_Q446;
        #if defined(_GRADIENT_DISABLED_)
          Bool_Q446 = true;
        #else
          Bool_Q446 = false;
        #endif

        // ScreenUV (#372)
        float2 ScreenUV_Q372;
        ScreenUV_Q372 = fragInput.binormal.xyz.xy/fragInput.binormal.xyz.z;
        
        // From_XY (#328)
        float2 Vec2_Q328 = float2(X_Q327,Y_Q327);

        half InLine_Q443;
        #if defined(_LINE_DISABLED_)
          InLine_Q443 = 0.0;
        #else
          Round_Rect_Fragment_B443(Z_Q327,W_Q327,_Filter_Width_,fragInput.uv,fragInput.extra1,InLine_Q443);
        #endif

        // From_XY (#392)
        float2 Vec2_Q392 = float2(X_Q424,Y_Q424);

        // Color_Texture (#374)
        half4 Color_Q374;
        half Used_Q374;
        #if defined(_BLUR_TEXTURE_ENABLE_)
          Color_Q374 = UNITY_SAMPLE_SCREENSPACE_TEXTURE(_blurTexture, ScreenUV_Q372);
          Used_Q374 = 1.0;
        #else
          Color_Q374 = half4(0,0,0,0);
          Used_Q374 = 0;
        #endif

        // Color_Texture (#376)
        half4 Color_Q376;
        half Used_Q376;
        #if defined(_BLUR_TEXTURE_2_ENABLE_)
          Color_Q376 = UNITY_SAMPLE_SCREENSPACE_TEXTURE(_blurTexture2, ScreenUV_Q372);
          Used_Q376 = 1.0;
        #else
          Color_Q376 = half4(0,0,0,0);
          Used_Q376 = 0.0;
        #endif

        half3 Gradient_Q442;
        #if defined(_EDGE_ONLY_)
          Gradient_Q442 = half3(0,0,0);
        #else
          Gradient_B442(_Gradient_Color_,_Top_Left_,_Top_Right_,_Bottom_Left_,_Bottom_Right_,Vec2_Q328,Gradient_Q442);
        #endif

        // Scale2 (#394)
        float2 Result_Q394 = Vec2_Q392 * _GridScale;

        // Add_Colors (#363)
        half4 Sum_Q363 = Color_Q374 + Color_Q376;

        // Max (#365)
        half MaxAB_Q365=max(Used_Q374,Used_Q376);

        // Add_Colors (#452)
        half3 Interior_Gradient_Q452;
        half3 Edge_Gradient_Q452;
        Interior_Gradient_Q452 = Bool_Q446 ? half3(0,0,0) : Gradient_Q442.rgb;
        Edge_Gradient_Q452 = Bool_Q446 ? half3(0,0,0) : fragInput.tangent.xyz + Gradient_Q442.rgb;

        // Color_Texture (#393)
        half4 Color_Q393 = tex2D(_OccludedTex,Result_Q394);

        // Mix_Colors (#366)
        half3 Color_At_T_Q366 = lerp(_Fallback_Color_.rgb, Sum_Q363.rgb,float4( MaxAB_Q365, MaxAB_Q365, MaxAB_Q365, MaxAB_Q365));

        // Add3 (#447)
        half3 Sum3_Q447 = Interior_Gradient_Q452 + Result_Q451;

        // Mix_Colors (#453)
        half3 Color_At_T_Q453 = Line_Color_Q356.rgb + (Edge_Gradient_Q452-Line_Color_Q356.rgb)*_Line_Gradient_Blend_;

        // Multiply_Colors (#395)
        half3 Product_Q395 = _OccludedColor.rgb * Color_Q393.rgb;

        // Add_Colors (#449)
        half3 Base_And_Iridescent_Q449 = _Base_Color_.rgb + Sum3_Q447;

        // Add_Scaled_Color (#450)
        half3 Sum_Q450 = Color_At_T_Q453 + _Iridescence_Edge_Intensity_ * Color_Q445;

        // Add_Scaled_Color (#463)
        half3 Sum_Q463 = Base_And_Iridescent_Q449 + _Occluded_Blur_Intensity_ * Color_At_T_Q366;

        // Add_Scaled_Color (#485)
        half3 Sum_Q485 = Sum_Q450 + _Occluded_Blur_Edge_Intensity_ * Color_At_T_Q366;

        // Mix3 (#482)
        half3 V_T_Q482 = lerp(Sum_Q463,Sum_Q485,float3(InLine_Q443,InLine_Q443,InLine_Q443));

        // Scale3 (#487)
        half3 Result_Q487 = _Occluded_Intensity_ * V_T_Q482;

        // Add3 (#491)
        half3 Sum3_Q491 = Result_Q487 + Product_Q395;

        // Set_Alpha (#489)
        half4 Result_Q489 = half4(Sum3_Q491, 1);

        // Multiply_Colors (#427)
        half4 Product_Q427 = fragInput.vertexColor * Result_Q489;

        // Scale_Color (#396)
        half4 Result_Q396 = Inside_Rect_Q411 * Product_Q427;

        half4 Out_Color = Result_Q396;


        result = Out_Color;
        return result;
        }
        ENDCG
    }

 }
}
