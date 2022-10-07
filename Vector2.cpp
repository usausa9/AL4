#include "Vector2.h"
#include <cmath>    // sqrt

// コンストラクタ
// 零ベクトルとして生成
Vector2::Vector2() : x(0), y(0) {}

// x,y成分を指定しての生成
Vector2::Vector2(float x, float y) : x(x), y(y) {}

// ノルム(長さ)を求める
float Vector2::length() const
{
	return sqrt(x * x + y * y);
}

// 正規化
Vector2& Vector2::normalize()
{
	float len = length();
	if (len != 0)
	{
		return *this /= len;
	}
	return *this;
}

// 内積を求める
float Vector2::dot(const Vector2& v) const
{
	return x * v.x + y * v.y;
}

// 外積を求める
float Vector2::cross(const Vector2& v) const
{
	return x * v.y - y * v.x;
}

// 単項演算子オーバーロード
Vector2 Vector2::operator+() const
{
	return *this;
}
Vector2 Vector2::operator-() const
{
	return Vector2(-x, -y);
}

// 代入演算子オーバーロード
Vector2& Vector2::operator+=(const Vector2& v)
{
	x += v.x;
	y += v.y;
	return *this;
}
Vector2& Vector2::operator-=(const Vector2& v)
{
	x -= v.x;
	y -= v.y;
	return *this;
}
Vector2& Vector2::operator*=(float s)
{
	x *= s;
	y *= s;
	return *this;
}
Vector2& Vector2::operator/=(float s)
{
	x /= s;
	y /= s;
	return *this;
}

// 2項演算子オーバーロード
// ※いろんな引数のパターンに対応するため、以下のように準備している
const Vector2 operator+(const Vector2& v1, const Vector2& v2)
{
	Vector2 temp(v1);
	return temp += v2;
}
const Vector2 operator-(const Vector2& v1, const Vector2& v2)
{
	Vector2 temp(v1);
	return temp -= v2;
}
const Vector2 operator*(const Vector2& v, float s)
{
	Vector2 temp(v);
	return temp *= s;
}
const Vector2 operator*(float s, const Vector2& v)
{
	return v * s;
}
const Vector2 operator/(const Vector2& v, float s)
{
	Vector2 temp(v);
	return temp /= s;
}