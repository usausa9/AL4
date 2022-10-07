#include "Matrix4.h"

Matrix4::Matrix4() {}

Matrix4::Matrix4(
	float m00, float m01, float m02, float m03,
	float m10, float m11, float m12, float m13,
	float m20, float m21, float m22, float m23,
	float m30, float m31, float m32, float m33) {}

Matrix4 ScalarProduct(Matrix4 matrix, Vector3 scalar)
{
	matrix.m[0][0] *= scalar.x;
	matrix.m[1][0] *= scalar.x;
	matrix.m[2][0] *= scalar.x;
	matrix.m[3][0] *= scalar.x;

	matrix.m[0][1] *= scalar.y;
	matrix.m[1][1] *= scalar.y;
	matrix.m[2][1] *= scalar.y;
	matrix.m[3][1] *= scalar.y;

	matrix.m[0][2] *= scalar.z;
	matrix.m[1][2] *= scalar.z;
	matrix.m[2][2] *= scalar.z;
	matrix.m[3][2] *= scalar.z;
	return matrix;
}

Matrix4 Matrix4Product(Matrix4 matrix, Matrix4 matrix2)
{
	Matrix4 matResult;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			matResult.m[j][i] =
				matrix.m[j][0] * matrix.m[i][0] +
				matrix.m[j][1] * matrix.m[i][1] +
				matrix.m[j][2] * matrix.m[i][2] +
				matrix.m[j][3] * matrix.m[i][3];
		}
	}

	return matResult;
}

Matrix4 IdentityMatrix(Matrix4 matrix)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j = i)
			{
				matrix.m[j][i] = 1;
			}
			else
			{
				matrix.m[j][i] = 0;
			}
		}
	}

	return matrix;
}
