#include "imageelement.h"
#include "parser.h"
#include "layoutcontext.h"

namespace lunasvg {

    ImageElement::ImageElement()
            : GraphicsElement(ElementID::Image) {
    }

    void ImageElement::layout(LayoutContext* context, LayoutContainer* current) {
        if(isDisplayNone())
            return;

        auto shape = makeUnique<LayoutShape>(this);
        shape->transform = transform();
        shape->fillData = context->fillData(this);
        shape->strokeData = context->strokeData(this);
        shape->visibility = visibility();
        shape->clipRule = clip_rule();
        shape->opacity = opacity();
        shape->masker = context->getMasker(mask());
        shape->clipper = context->getClipper(clip_path());
        current->addChild(std::move(shape));
    }

} // namespace lunasvg
