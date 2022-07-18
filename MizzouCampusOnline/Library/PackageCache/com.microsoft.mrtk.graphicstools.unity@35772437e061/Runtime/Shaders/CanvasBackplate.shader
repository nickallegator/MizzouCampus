// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

Shader "Graphics Tools/Canvas/Backplate" {

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
     
    [Header(Antialiasing)]
        [Toggle(_SMOOTH_EDGES_)] _Smooth_Edges_("Smooth Edges", Float) = 0
     
    [Header(Occlusion)]
        _Occluded_Intensity_("Occluded Intensity", Range(0,1)) = 1
        [NoScaleOffset] _OccludedTex("OccludedTex", 2D) = "" {}
        _OccludedColor("OccludedColor", Color) = (0,0.5,1,1)
        _GridScale("GridScale", Float) = 0.02
     

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
    #pragma shader_feature_local _ _SMOOTH_EDGES_

    #pragma multi_compile_local _ UNITY_UI_CLIP_RECT
    #pragma multi_compile_local _ _UI_CLIP_RECT_ROUNDED _UI_CLIP_RECT_ROUNDED_INDEPENDENT

    #include "UnityCG.cginc"
    #include "GraphicsToolsCommon.hlsl"



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
    half _Iridescence_Intensity_;
    half _Iridescence_Edge_Intensity_;
    half4 _Iridescence_Tint_;
    sampler2D _Iridescent_Map_;
    float _Frequency_;
    float _Vertical_Offset_;
    //bool _Gradient_Disabled_;
    half4 _Gradient_Color_;
    half4 _Top_Left_;
    half4 _Top_Right_;
    half4 _Bottom_Left_;
    half4 _Bottom_Right_;
    //bool _Edge_Only_;
    half _Line_Gradient_Blend_;
    float _Fade_Out_;
    //bool _Smooth_Edges_;
    half _Occluded_Intensity_;
    sampler2D _OccludedTex;
    half4 _OccludedColor;
    float _GridScale;
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
        float4 vertexColor : COLOR;
        float4 extra1 : TEXCOORD4;
        float4 extra2 : TEXCOORD3;
        float4 extra3 : TEXCOORD2;
      UNITY_VERTEX_OUTPUT_STEREO
    };

    //BLOCK_BEGIN Round_Rect_Vertex 71

    void Round_Rect_Vertex_B71(
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

    //BLOCK_BEGIN Gradient 96

    void Gradient_B96(
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

    //BLOCK_BEGIN Line_Vertex 79

    void Line_Vertex_B79(
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

    //BLOCK_BEGIN RelativeOrAbsoluteDetail 64

    void RelativeOrAbsoluteDetail_B64(
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

    //BLOCK_BEGIN Edge_AA_Vertex 173

    void Edge_AA_Vertex_B173(
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

        // Object_To_World_Pos (#67)
        float3 Pos_World_Q67=(mul(UNITY_MATRIX_M, float4(vertInput.vertex.xyz*float3(float2(1,1).x, float2(1,1).y, 1.0), 1)));

        // Object_To_World_Dir (#73)
        float3 Nrm_World_Q73;
        #if defined(_IRIDESCENCE_ENABLE_)
          Nrm_World_Q73 = normalize((mul((float3x3)UNITY_MATRIX_M, vertInput.normal)));
          
        #else
          Nrm_World_Q73 = float3(0,0,1);
        #endif

        // Scale_Color (#83)
        float4 Result_Q83 = _Fade_Out_ * vertInput.color;

        // To_XY (#60)
        float X_Q60;
        float Y_Q60;
        X_Q60 = vertInput.uv3.x;
        Y_Q60 = vertInput.uv3.y;

        half3 Result_Q96;
        #if defined(_EDGE_ONLY_)
          Gradient_B96(_Gradient_Color_,_Top_Left_,_Top_Right_,_Bottom_Left_,_Bottom_Right_,vertInput.uv0,Result_Q96);
        #else
          Result_Q96 = half3(0,0,0);
        #endif

        // Permutation_To_Bool (#107)
        bool Bool_Q107;
        #if defined(_GRADIENT_DISABLED_)
          Bool_Q107 = true;
        #else
          Bool_Q107 = false;
        #endif

        // To_XY (#55)
        float X_Q55;
        float Y_Q55;
        X_Q55 = vertInput.uv0.x;
        Y_Q55 = vertInput.uv0.y;

        // To_XYZ (#282)
        float X_Q282;
        float Y_Q282;
        float Z_Q282;
        X_Q282=vertInput.vertex.xyz.x;
        Y_Q282=vertInput.vertex.xyz.y;
        Z_Q282=vertInput.vertex.xyz.z;
        
        float Gradient1_Q173;
        float Gradient2_Q173;
        #if defined(_SMOOTH_EDGES_)
          Edge_AA_Vertex_B173(Pos_World_Q67,vertInput.normal,_WorldSpaceCameraPos,vertInput.tangent,Gradient1_Q173,Gradient2_Q173);
        #else
          Gradient1_Q173 = 1;
          Gradient2_Q173 = 1;
        #endif

        // To_XY (#57)
        float X_Q57;
        float Y_Q57;
        X_Q57 = vertInput.uv2.x;
        Y_Q57 = vertInput.uv2.y;

        // Conditional_Vec3 (#106)
        float3 Result_Q106 = Bool_Q107 ? float3(0,0,0) : Result_Q96;

        // From_XYZW (#174)
        float4 Vec4_Q174 = float4(X_Q282, Y_Q282, Gradient1_Q173, Gradient2_Q173);

        // Divide (#46)
        float Anisotropy_Q46 = X_Q57 / Y_Q57;

        float Radius_Q64;
        float Line_Width_Q64;
        RelativeOrAbsoluteDetail_B64(0.0,_Line_Width_,true,Y_Q57,Radius_Q64,Line_Width_Q64);

        float2 Rect_UV_Q71;
        float4 Rect_Parms_Q71;
        float2 Scale_XY_Q71;
        float2 Line_UV_Q71;
        Round_Rect_Vertex_B71(vertInput.uv0,X_Q60,Anisotropy_Q46,Rect_UV_Q71,Rect_Parms_Q71,Scale_XY_Q71,Line_UV_Q71);

        // From_XYZW (#54)
        float4 Vec4_Q54 = float4(X_Q55, Y_Q55, X_Q60, Line_Width_Q64);

        float4 Line_Vertex_Q79;
        #if defined(_LINE_DISABLED_)
          Line_Vertex_Q79 = float4(0,0,0,0);
        #else
          Line_Vertex_B79(Scale_XY_Q71,Line_UV_Q71,_Time.y,_Rate_,_Highlight_Transform_,Line_Vertex_Q79);
        #endif

        // Add4 (#70)
        float4 Sum4_Q70 = Rect_Parms_Q71 + Line_Vertex_Q79;

        float3 Position = Pos_World_Q67;
        float3 Normal = Nrm_World_Q73;
        float2 UV = Rect_UV_Q71;
        float3 Tangent = Result_Q106;
        float3 Binormal = float3(0,0,0);
        float4 Color = Result_Q83;
        float4 Extra1 = Sum4_Q70;
        float4 Extra2 = Vec4_Q54;
        float4 Extra3 = Vec4_Q174;

        o.pos = mul(UNITY_MATRIX_VP, float4(Position,1));
#ifdef UNITY_UI_CLIP_RECT
        o.posLocal = vertInput.vertex.xyz;
#endif
        o.posWorld = Position;
        o.normalWorld.xyz = Normal; o.normalWorld.w=1.0;
        o.uv = UV;
        o.tangent.xyz = Tangent; o.tangent.w=1.0;
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

    //BLOCK_BEGIN Smooth_Edges 171

    void Smooth_Edges_B171(
        half Filter_Width,
        half4 Rect_Parms,
        out half Inside_Rect    )
    {
        float g = min(Rect_Parms.z,Rect_Parms.w);
        float dgrad = max(fwidth(g)*Filter_Width,0.001);
        Inside_Rect = saturate(g/dgrad);
    }
    //BLOCK_END Smooth_Edges

    //BLOCK_BEGIN Round_Rect_Fragment 78

    void Round_Rect_Fragment_B78(
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

    //BLOCK_BEGIN Iridescence 61

    void Iridescence_B61(
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

    //BLOCK_BEGIN Line_Fragment 77

    void Line_Fragment_B77(
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

    //BLOCK_BEGIN Gradient 80

    void Gradient_B80(
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
        half4 result;

        half Inside_Rect_Q171;
        #if defined(_SMOOTH_EDGES_)
          Smooth_Edges_B171(1,fragInput.extra3,Inside_Rect_Q171);
        #else
          Inside_Rect_Q171 = 1.0;
        #endif

        // To_XYZW (#47)
        float X_Q47;
        float Y_Q47;
        float Z_Q47;
        float W_Q47;
        X_Q47=fragInput.extra2.x;
        Y_Q47=fragInput.extra2.y;
        Z_Q47=fragInput.extra2.z;
        W_Q47=fragInput.extra2.w;

        half3 Color_Q61;
        #if defined(_IRIDESCENCE_ENABLE_)
          Iridescence_B61(fragInput.posWorld,fragInput.normalWorld.xyz,fragInput.uv,_WorldSpaceCameraPos,_Iridescence_Tint_,_Iridescent_Map_,_Frequency_,_Vertical_Offset_,Color_Q61);
        #else
          Color_Q61 = half3(0,0,0);
        #endif

        half4 Line_Color_Q77;
        #if defined(_LINE_DISABLED_)
          Line_Color_Q77 = half4(0,0,0,1);
        #else
          Line_Fragment_B77(_Line_Color_,_Highlight_Color_,_Highlight_Width_,fragInput.extra1,_Highlight_,Line_Color_Q77);
        #endif

        // Scale3 (#137)
        half3 Result_Q137 = _Iridescence_Intensity_ * Color_Q61;

        // Permutation_To_Bool (#100)
        bool Bool_Q100;
        #if defined(_GRADIENT_DISABLED_)
          Bool_Q100 = true;
        #else
          Bool_Q100 = false;
        #endif

        // From_XY (#48)
        float2 Vec2_Q48 = float2(X_Q47,Y_Q47);

        half InLine_Q78;
        #if defined(_LINE_DISABLED_)
          InLine_Q78 = 0.0;
        #else
          Round_Rect_Fragment_B78(Z_Q47,W_Q47,_Filter_Width_,fragInput.uv,fragInput.extra1,InLine_Q78);
        #endif

        half3 Gradient_Q80;
        #if defined(_EDGE_ONLY_)
          Gradient_Q80 = half3(0,0,0);
        #else
          Gradient_B80(_Gradient_Color_,_Top_Left_,_Top_Right_,_Bottom_Left_,_Bottom_Right_,Vec2_Q48,Gradient_Q80);
        #endif

        // Add_Colors (#116)
        half3 Interior_Gradient_Q116;
        half3 Edge_Gradient_Q116;
        Interior_Gradient_Q116 = Bool_Q100 ? half3(0,0,0) : Gradient_Q80.rgb;
        Edge_Gradient_Q116 = Bool_Q100 ? half3(0,0,0) : fragInput.tangent.xyz + Gradient_Q80.rgb;

        // Mix_Colors (#51)
        half3 Color_At_T_Q51 = Line_Color_Q77.rgb + (Edge_Gradient_Q116-Line_Color_Q77.rgb)*_Line_Gradient_Blend_;

        // Add3 (#133)
        half3 Sum3_Q133 = Interior_Gradient_Q116 + Result_Q137;

        // Add_Scaled_Color (#52)
        half3 Sum_Q52 = Color_At_T_Q51 + _Iridescence_Edge_Intensity_ * Color_Q61;

        // Add_Colors (#62)
        half3 Base_And_Iridescent_Q62 = _Base_Color_.rgb + Sum3_Q133;

        // Mix3 (#127)
        half3 V_T_Q127 = lerp(Base_And_Iridescent_Q62,Sum_Q52,float3(InLine_Q78,InLine_Q78,InLine_Q78));

        // Set_Alpha (#58)
        half4 Result_Q58 = half4(V_T_Q127, 1);

        // Multiply_Colors (#85)
        half4 Product_Q85 = fragInput.vertexColor * Result_Q58;

        // Scale_Color (#175)
        half4 Result_Q175 = Inside_Rect_Q171 * Product_Q85;

        half4 Out_Color = Result_Q175;
        half Clip_Threshold = 0.001;
        bool To_sRGB = false;

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

        //BLOCK_BEGIN Smooth_Edges 171

        void Smooth_Edges_B171(
            half Filter_Width,
            half4 Rect_Parms,
            out half Inside_Rect        )
        {
            float g = min(Rect_Parms.z,Rect_Parms.w);
            float dgrad = max(fwidth(g)*Filter_Width,0.001);
            Inside_Rect = saturate(g/dgrad);
        }
        //BLOCK_END Smooth_Edges

        //BLOCK_BEGIN Round_Rect_Fragment 78

        void Round_Rect_Fragment_B78(
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

        //BLOCK_BEGIN Iridescence 61

        void Iridescence_B61(
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

        //BLOCK_BEGIN Line_Fragment 77

        void Line_Fragment_B77(
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

        //BLOCK_BEGIN Gradient 80

        void Gradient_B80(
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
        half4 result;

        half Inside_Rect_Q171;
        #if defined(_SMOOTH_EDGES_)
          Smooth_Edges_B171(1,fragInput.extra3,Inside_Rect_Q171);
        #else
          Inside_Rect_Q171 = 1.0;
        #endif

        // To_XYZW (#47)
        float X_Q47;
        float Y_Q47;
        float Z_Q47;
        float W_Q47;
        X_Q47=fragInput.extra2.x;
        Y_Q47=fragInput.extra2.y;
        Z_Q47=fragInput.extra2.z;
        W_Q47=fragInput.extra2.w;

        half3 Color_Q61;
        #if defined(_IRIDESCENCE_ENABLE_)
          Iridescence_B61(fragInput.posWorld,fragInput.normalWorld.xyz,fragInput.uv,_WorldSpaceCameraPos,_Iridescence_Tint_,_Iridescent_Map_,_Frequency_,_Vertical_Offset_,Color_Q61);
        #else
          Color_Q61 = half3(0,0,0);
        #endif

        half4 Line_Color_Q77;
        #if defined(_LINE_DISABLED_)
          Line_Color_Q77 = half4(0,0,0,1);
        #else
          Line_Fragment_B77(_Line_Color_,_Highlight_Color_,_Highlight_Width_,fragInput.extra1,_Highlight_,Line_Color_Q77);
        #endif

        // Scale3 (#137)
        half3 Result_Q137 = _Iridescence_Intensity_ * Color_Q61;

        // To_XYZW (#267)
        float X_Q267;
        float Y_Q267;
        float Z_Q267;
        float W_Q267;
        X_Q267=fragInput.extra3.x;
        Y_Q267=fragInput.extra3.y;
        Z_Q267=fragInput.extra3.z;
        W_Q267=fragInput.extra3.w;

        // Permutation_To_Bool (#100)
        bool Bool_Q100;
        #if defined(_GRADIENT_DISABLED_)
          Bool_Q100 = true;
        #else
          Bool_Q100 = false;
        #endif

        // From_XY (#48)
        float2 Vec2_Q48 = float2(X_Q47,Y_Q47);

        half InLine_Q78;
        #if defined(_LINE_DISABLED_)
          InLine_Q78 = 0.0;
        #else
          Round_Rect_Fragment_B78(Z_Q47,W_Q47,_Filter_Width_,fragInput.uv,fragInput.extra1,InLine_Q78);
        #endif

        // From_XY (#268)
        float2 Vec2_Q268 = float2(X_Q267,Y_Q267);

        half3 Gradient_Q80;
        #if defined(_EDGE_ONLY_)
          Gradient_Q80 = half3(0,0,0);
        #else
          Gradient_B80(_Gradient_Color_,_Top_Left_,_Top_Right_,_Bottom_Left_,_Bottom_Right_,Vec2_Q48,Gradient_Q80);
        #endif

        // Scale2 (#275)
        float2 Result_Q275 = Vec2_Q268 * _GridScale;

        // Add_Colors (#116)
        half3 Interior_Gradient_Q116;
        half3 Edge_Gradient_Q116;
        Interior_Gradient_Q116 = Bool_Q100 ? half3(0,0,0) : Gradient_Q80.rgb;
        Edge_Gradient_Q116 = Bool_Q100 ? half3(0,0,0) : fragInput.tangent.xyz + Gradient_Q80.rgb;

        // Color_Texture (#271)
        half4 Color_Q271 = tex2D(_OccludedTex,Result_Q275);

        // Mix_Colors (#51)
        half3 Color_At_T_Q51 = Line_Color_Q77.rgb + (Edge_Gradient_Q116-Line_Color_Q77.rgb)*_Line_Gradient_Blend_;

        // Add3 (#133)
        half3 Sum3_Q133 = Interior_Gradient_Q116 + Result_Q137;

        // Multiply_Colors (#274)
        half3 Product_Q274 = _OccludedColor.rgb * Color_Q271.rgb;

        // Add_Scaled_Color (#52)
        half3 Sum_Q52 = Color_At_T_Q51 + _Iridescence_Edge_Intensity_ * Color_Q61;

        // Add_Colors (#62)
        half3 Base_And_Iridescent_Q62 = _Base_Color_.rgb + Sum3_Q133;

        // Mix3 (#127)
        half3 V_T_Q127 = lerp(Base_And_Iridescent_Q62,Sum_Q52,float3(InLine_Q78,InLine_Q78,InLine_Q78));

        // Scale3 (#289)
        half3 Result_Q289 = _Occluded_Intensity_ * V_T_Q127;

        // Add3 (#278)
        half3 Sum3_Q278 = Result_Q289 + Product_Q274;

        // Set_Alpha (#273)
        half4 Result_Q273 = half4(Sum3_Q278, 1);

        // Multiply_Colors (#277)
        half4 Product_Q277 = fragInput.vertexColor * Result_Q273;

        // Scale_Color (#269)
        half4 Result_Q269 = Inside_Rect_Q171 * Product_Q277;

        half4 Out_Color = Result_Q269;


        result = Out_Color;
        return result;
        }
        ENDCG
    }

 }
}
