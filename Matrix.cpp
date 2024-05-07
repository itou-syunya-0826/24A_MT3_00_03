#include "Matrix.h"

Matrix::Matrix() {}

Matrix4x4 Matrix::MakeTranslateMatrix(const Vector3& translate)
{

	Matrix4x4 result = 
	{
		1,0,0,0,
		0,1,0,0,
		0,0,1,0,
		translate.x,translate.y,translate.z,1
	};

	return result;

}

Matrix4x4 Matrix::MakeScaleMatrix(const Vector3& scale)
{

	Matrix4x4 result = 
	{   
	    scale.x,0,0,0,
		0,scale.y,0,0,
		0,0,scale.z,0,
		0,0,0,1
	};

	return result;
}

Vector3 Matrix::Transform(const Vector3& vector, const Matrix4x4& matrix)
{
	Vector3 result = { vector.x / 1,vector.y / 1,vector.z / 1 };

	return result;
}


