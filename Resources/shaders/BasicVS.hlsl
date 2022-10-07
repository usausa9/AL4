#include "Basic.hlsli"

VSOutput main(float4 pos : POSITION, float3 normal : NORMAL, float2 uv : TEXCOORD)
{
	VSOutput output;			 // ピクセルシェーダーに渡す値
	output.svpos = mul(mat,pos); //	座標に行列を乗算
	output.normal = normal;
	output.uv = uv;
	return output;
}

//float4 main(float4 pos : POSITION) : SV_POSITION
//{
//	/*return pos + float4(0.5f,0.5f,0,0);    右上に0.5fずつ移動 */ 
//	/*return pos * float4(1.5f, 1.5f, 1, 1); 1.5倍 拡大 */
//	return pos;
//}