#pragma once


struct IRenderer
{
	
	virtual void SetMesh(std::shared_ptr<D3DAModel> pModel) = 0;
	virtual void AddMaterial(shared_ptr<D3DAMaterial> Material) = 0;
	virtual void DrawMesh() = 0;

	IRenderer() {}
	virtual ~IRenderer() {}
};