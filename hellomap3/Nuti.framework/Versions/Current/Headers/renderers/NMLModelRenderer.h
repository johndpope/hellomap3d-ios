#ifndef NMLMODELRENDERER_H_
#define NMLMODELRENDERER_H_

#include "NMLModelRendererBase.h"
#include "vectorelements/NMLModel.h"
#include "drawdatas/NMLModelDrawData.h"

#include <list>
#include <vector>

namespace Nuti {
	
namespace nmlGL {
		class Model;
}

class Projection;

class NMLModelRenderer : public NMLModelRendererBase {
public:
	NMLModelRenderer();
	virtual ~NMLModelRenderer();

	void addElement(const std::shared_ptr<NMLModel>& element);
	void refreshElements();
    void updateElement(const std::shared_ptr<NMLModel>& element);
    void removeElement(const std::shared_ptr<NMLModel>& element);

	virtual void calculateRayIntersectedElements(const Projection& projection, const MapPos& rayOrig, const MapVec& rayDir,
					const ViewState& viewState, std::vector<VectorElementClickInfo>& results) const;

protected:
	virtual bool drawModels(const ViewState& viewState);

private:
    typedef std::vector<std::shared_ptr<NMLModel> > ElementsVector;
	typedef std::map<std::shared_ptr<nml::Model>, std::shared_ptr<nmlGL::Model>> GLModelMap;

	GLModelMap _glModelMap;
	ElementsVector _elements;
	ElementsVector _tempElements;
};

}

#endif
