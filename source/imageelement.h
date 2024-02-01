#ifndef IMAGEELEMENT_H
#define IMAGEELEMENT_H

#include "graphicselement.h"

namespace lunasvg {

    class ImageElement final : public GraphicsElement {
    public:
        ImageElement();

        void layout(lunasvg::LayoutContext *, lunasvg::LayoutContainer *) final;
    };

} // namespace lunasvg

#endif // IMAGEELEMENT_H
