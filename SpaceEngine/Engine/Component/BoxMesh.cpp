/*
** G-TECH PROJECT, 2023
** SpaceProject
** File description:
** BoxMesh
*/

#include "BoxMesh.h"

namespace SpaceEngine {
	std::unordered_map<unsigned int, std::shared_ptr<BoxMesh>> BoxMesh::_entitiesBoxMesh = {};

	BoxMesh::BoxMesh() : _isBuild(false), _meshType("box")
	{
	}

	BoxMesh::~BoxMesh()
	{
	}

	void BoxMesh::addEntity(unsigned int entityId, std::shared_ptr<BoxMesh> component)
	{
		_entityId = entityId;
		_entitiesBoxMesh[_entityId] = component;
	}

	std::unordered_map<unsigned int, std::shared_ptr<BoxMesh>> BoxMesh::getComponents()
	{
		return _entitiesBoxMesh;
	}

	std::string BoxMesh::getMeshType()
	{
		return _meshType;
	}

	void BoxMesh::init(void* engine, void* renderApp)
	{

	}
	void BoxMesh::update(void* engine, void* renderApp)
	{

	}

	void BoxMesh::setState(bool state)
	{
		_isBuild = state;
	}

	bool BoxMesh::getState()
	{
		return _isBuild;
	}
}