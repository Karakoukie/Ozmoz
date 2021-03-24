Shader "Hidden/Custom/Sharpen"
{
    HLSLINCLUDE
    // StdLib.hlsl holds pre-configured vertex shaders (VertDefault), varying structs (VaryingsDefault), and most of the data you need to write common effects.
        #include "Packages/com.unity.postprocessing/PostProcessing/Shaders/StdLib.hlsl"
        TEXTURE2D_SAMPLER2D(_MainTex, sampler_MainTex);
    // Lerp the pixel color with the luminance using the _Blend uniform.
        float _Size;
        float _Blend;
        float4 Frag(VaryingsDefault i) : SV_Target
        {
            float4 color = SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, i.texcoord) * (1 + 8 * _Blend);
            color -= SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, half2(i.texcoord.x - _Size * 0.001, i.texcoord.y)) * _Blend;
            color -= SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, half2(i.texcoord.x, i.texcoord.y + _Size * 0.001)) * _Blend;
            color -= SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, half2(i.texcoord.x + _Size * 0.001, i.texcoord.y + _Size * 0.001)) * _Blend;
            color -= SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, half2(i.texcoord.x - _Size * 0.001, i.texcoord.y)) * _Blend;
            color -= SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, half2(i.texcoord.x + _Size * 0.001, i.texcoord.y)) * _Blend;
            color -= SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, half2(i.texcoord.x - _Size * 0.001, i.texcoord.y - _Size * 0.001)) * _Blend;
            color -= SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, half2(i.texcoord.x, i.texcoord.y - _Size * 0.001)) * _Blend;
            color -= SAMPLE_TEXTURE2D(_MainTex, sampler_MainTex, half2(i.texcoord.x + _Size * 0.001, i.texcoord.y - _Size * 0.001)) * _Blend;
            return color;
        }
    ENDHLSL
    SubShader
    {
        Cull Off ZWrite Off ZTest Always
        Pass
        {
            HLSLPROGRAM
                #pragma vertex VertDefault
                #pragma fragment Frag
            ENDHLSL
        }
    }
}