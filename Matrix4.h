#pragma once
#include "Vector3.h"

/// 行列
class Matrix4 
{
public:
	// 行列
	float m[4][4];

	// コンストラクタ
	Matrix4();

	// 成分を指定しての生成

	Matrix4
	(
		float m00, float m01, float m02, float m03,
		float m10, float m11, float m12, float m13,
		float m20, float m21, float m22, float m23,
		float m30, float m31, float m32, float m33
	);

	// 代入演算子オーバーロード
	Matrix4& operator*=(const Matrix4& m2);
};

// 行列のスカラー倍
Matrix4 ScalarProduct(Matrix4 matrix, Vector3 scalar);

// 行列同士の掛け算
Matrix4 Matrix4Product(Matrix4 matrix, Matrix4 matrix2);

// 単位行列代入
Matrix4 IdentityMatrix(Matrix4 matrix);