// マテリアル
cbuffer ConstBufferDataMaterial : register(b0)
{
	// 色(RGBA)
	float4 color;
};

// 3D変換行列
cbuffer ConstBufferDataTransform : register(b1)
{
	// 3D変換行列
	matrix mat;
};

// 頂点シェーダーの出力構造体
// (頂点シェーダーからピクセルシェーダーへのやり取りに使用する)
struct VSOutput
{
	
	float4 svpos : SV_POSITION;	// システム用頂点座標
	float3 normal : NORMAL;		// 法線ベクトル
	float2 uv : TEXCOORD;		// uv値
};