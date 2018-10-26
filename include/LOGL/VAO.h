#ifndef _VAO_H_
#define _VAO_H_

#include<vector>

namespace LOGL {
	class VAO {
	public:
		struct VBO_DataPatch{
			float const * data;
			size_t dataSize;
			size_t attrLen;
		};

		VAO(float const * data, size_t dataSize, const std::vector<size_t> & attrLen);
		VAO(float const * data, size_t dataSize, const std::vector<size_t> & attrLen, size_t const * index, size_t indexSize);
		VAO(const std::vector<VBO_DataPatch> & vec_VBO_DataPatch);
		VAO(const std::vector<VBO_DataPatch> & vec_VBO_DataPatch, size_t const * index, size_t indexSize);
		size_t GetID() const;
		bool IsValid() const;
		bool Use() const;
	private:
		bool GenBindEBO(size_t const * index, size_t indexSize);
		//------------
		size_t ID;
		bool isValid;
	};
}

#endif // !_VAO_H_
