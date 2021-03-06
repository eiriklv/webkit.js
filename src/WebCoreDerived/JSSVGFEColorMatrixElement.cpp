/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(FILTERS) && ENABLE(SVG)

#include "JSSVGFEColorMatrixElement.h"

#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedNumberList.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEColorMatrixElement.h"
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedLength.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGFEColorMatrixElementTableValues[] =
{
    { "in1", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementIn1), (intptr_t)0 },
    { "type", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementType), (intptr_t)0 },
    { "values", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementValues), (intptr_t)0 },
#if ENABLE(SVG)
    { "x", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementX), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "y", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementY), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "width", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementWidth), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "height", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementHeight), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "result", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementResult), (intptr_t)0 },
#endif
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFEColorMatrixElementTable = { 33, 31, JSSVGFEColorMatrixElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGFEColorMatrixElementConstructorTableValues[] =
{
    { "SVG_FECOLORMATRIX_TYPE_UNKNOWN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementSVG_FECOLORMATRIX_TYPE_UNKNOWN), (intptr_t)0 },
    { "SVG_FECOLORMATRIX_TYPE_MATRIX", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementSVG_FECOLORMATRIX_TYPE_MATRIX), (intptr_t)0 },
    { "SVG_FECOLORMATRIX_TYPE_SATURATE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementSVG_FECOLORMATRIX_TYPE_SATURATE), (intptr_t)0 },
    { "SVG_FECOLORMATRIX_TYPE_HUEROTATE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementSVG_FECOLORMATRIX_TYPE_HUEROTATE), (intptr_t)0 },
    { "SVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementSVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFEColorMatrixElementConstructorTable = { 17, 15, JSSVGFEColorMatrixElementConstructorTableValues, 0 };
const ClassInfo JSSVGFEColorMatrixElementConstructor::s_info = { "SVGFEColorMatrixElementConstructor", &Base::s_info, &JSSVGFEColorMatrixElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGFEColorMatrixElementConstructor) };

JSSVGFEColorMatrixElementConstructor::JSSVGFEColorMatrixElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFEColorMatrixElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGFEColorMatrixElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGFEColorMatrixElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEColorMatrixElementConstructor, JSDOMWrapper>(exec, JSSVGFEColorMatrixElementConstructorTable, jsCast<JSSVGFEColorMatrixElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFEColorMatrixElementPrototypeTableValues[] =
{
    { "SVG_FECOLORMATRIX_TYPE_UNKNOWN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementSVG_FECOLORMATRIX_TYPE_UNKNOWN), (intptr_t)0 },
    { "SVG_FECOLORMATRIX_TYPE_MATRIX", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementSVG_FECOLORMATRIX_TYPE_MATRIX), (intptr_t)0 },
    { "SVG_FECOLORMATRIX_TYPE_SATURATE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementSVG_FECOLORMATRIX_TYPE_SATURATE), (intptr_t)0 },
    { "SVG_FECOLORMATRIX_TYPE_HUEROTATE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementSVG_FECOLORMATRIX_TYPE_HUEROTATE), (intptr_t)0 },
    { "SVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEColorMatrixElementSVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFEColorMatrixElementPrototypeTable = { 17, 15, JSSVGFEColorMatrixElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEColorMatrixElementPrototype::s_info = { "SVGFEColorMatrixElementPrototype", &Base::s_info, &JSSVGFEColorMatrixElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGFEColorMatrixElementPrototype) };

JSObject* JSSVGFEColorMatrixElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEColorMatrixElement>(vm, globalObject);
}

bool JSSVGFEColorMatrixElementPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFEColorMatrixElementPrototype* thisObject = jsCast<JSSVGFEColorMatrixElementPrototype*>(object);
    return getStaticValueSlot<JSSVGFEColorMatrixElementPrototype, JSObject>(exec, JSSVGFEColorMatrixElementPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSSVGFEColorMatrixElement::s_info = { "SVGFEColorMatrixElement", &Base::s_info, &JSSVGFEColorMatrixElementTable, 0 , CREATE_METHOD_TABLE(JSSVGFEColorMatrixElement) };

JSSVGFEColorMatrixElement::JSSVGFEColorMatrixElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEColorMatrixElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGFEColorMatrixElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGFEColorMatrixElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGFEColorMatrixElementPrototype::create(vm, globalObject, JSSVGFEColorMatrixElementPrototype::createStructure(vm, globalObject, JSSVGElementPrototype::self(vm, globalObject)));
}

bool JSSVGFEColorMatrixElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFEColorMatrixElement* thisObject = jsCast<JSSVGFEColorMatrixElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGFEColorMatrixElement, Base>(exec, JSSVGFEColorMatrixElementTable, thisObject, propertyName, slot);
}

EncodedJSValue jsSVGFEColorMatrixElementIn1(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGFEColorMatrixElement* castedThis = jsDynamicCast<JSSVGFEColorMatrixElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGFEColorMatrixElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEColorMatrixElementType(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGFEColorMatrixElement* castedThis = jsDynamicCast<JSSVGFEColorMatrixElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGFEColorMatrixElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedEnumeration> obj = impl.typeAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGFEColorMatrixElementValues(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGFEColorMatrixElement* castedThis = jsDynamicCast<JSSVGFEColorMatrixElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGFEColorMatrixElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumberList> obj = impl.valuesAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}


#if ENABLE(SVG)
EncodedJSValue jsSVGFEColorMatrixElementX(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGFEColorMatrixElement* castedThis = jsDynamicCast<JSSVGFEColorMatrixElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGFEColorMatrixElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}

#endif

#if ENABLE(SVG)
EncodedJSValue jsSVGFEColorMatrixElementY(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGFEColorMatrixElement* castedThis = jsDynamicCast<JSSVGFEColorMatrixElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGFEColorMatrixElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}

#endif

#if ENABLE(SVG)
EncodedJSValue jsSVGFEColorMatrixElementWidth(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGFEColorMatrixElement* castedThis = jsDynamicCast<JSSVGFEColorMatrixElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGFEColorMatrixElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}

#endif

#if ENABLE(SVG)
EncodedJSValue jsSVGFEColorMatrixElementHeight(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGFEColorMatrixElement* castedThis = jsDynamicCast<JSSVGFEColorMatrixElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGFEColorMatrixElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}

#endif

#if ENABLE(SVG)
EncodedJSValue jsSVGFEColorMatrixElementResult(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGFEColorMatrixElement* castedThis = jsDynamicCast<JSSVGFEColorMatrixElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGFEColorMatrixElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return JSValue::encode(result);
}

#endif

EncodedJSValue jsSVGFEColorMatrixElementConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSSVGFEColorMatrixElement* domObject = jsDynamicCast<JSSVGFEColorMatrixElement*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGFEColorMatrixElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGFEColorMatrixElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEColorMatrixElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

// Constant getters

EncodedJSValue jsSVGFEColorMatrixElementSVG_FECOLORMATRIX_TYPE_UNKNOWN(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0)));
}

EncodedJSValue jsSVGFEColorMatrixElementSVG_FECOLORMATRIX_TYPE_MATRIX(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(1)));
}

EncodedJSValue jsSVGFEColorMatrixElementSVG_FECOLORMATRIX_TYPE_SATURATE(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(2)));
}

EncodedJSValue jsSVGFEColorMatrixElementSVG_FECOLORMATRIX_TYPE_HUEROTATE(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(3)));
}

EncodedJSValue jsSVGFEColorMatrixElementSVG_FECOLORMATRIX_TYPE_LUMINANCETOALPHA(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(4)));
}


}

#endif // ENABLE(FILTERS) && ENABLE(SVG)
