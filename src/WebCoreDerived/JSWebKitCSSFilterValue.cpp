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

#if ENABLE(CSS_FILTERS)

#include "JSWebKitCSSFilterValue.h"

#include "WebKitCSSFilterValue.h"
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSWebKitCSSFilterValueTableValues[] =
{
    { "operationType", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueOperationType), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWebKitCSSFilterValueTable = { 5, 3, JSWebKitCSSFilterValueTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSWebKitCSSFilterValueConstructorTableValues[] =
{
    { "CSS_FILTER_REFERENCE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_REFERENCE), (intptr_t)0 },
    { "CSS_FILTER_GRAYSCALE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_GRAYSCALE), (intptr_t)0 },
    { "CSS_FILTER_SEPIA", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_SEPIA), (intptr_t)0 },
    { "CSS_FILTER_SATURATE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_SATURATE), (intptr_t)0 },
    { "CSS_FILTER_HUE_ROTATE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_HUE_ROTATE), (intptr_t)0 },
    { "CSS_FILTER_INVERT", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_INVERT), (intptr_t)0 },
    { "CSS_FILTER_OPACITY", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_OPACITY), (intptr_t)0 },
    { "CSS_FILTER_BRIGHTNESS", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_BRIGHTNESS), (intptr_t)0 },
    { "CSS_FILTER_CONTRAST", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_CONTRAST), (intptr_t)0 },
    { "CSS_FILTER_BLUR", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_BLUR), (intptr_t)0 },
    { "CSS_FILTER_DROP_SHADOW", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_DROP_SHADOW), (intptr_t)0 },
    { "CSS_FILTER_CUSTOM", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_CUSTOM), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWebKitCSSFilterValueConstructorTable = { 34, 31, JSWebKitCSSFilterValueConstructorTableValues, 0 };
const ClassInfo JSWebKitCSSFilterValueConstructor::s_info = { "WebKitCSSFilterValueConstructor", &Base::s_info, &JSWebKitCSSFilterValueConstructorTable, 0, CREATE_METHOD_TABLE(JSWebKitCSSFilterValueConstructor) };

JSWebKitCSSFilterValueConstructor::JSWebKitCSSFilterValueConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSWebKitCSSFilterValueConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSWebKitCSSFilterValuePrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSWebKitCSSFilterValueConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitCSSFilterValueConstructor, JSDOMWrapper>(exec, JSWebKitCSSFilterValueConstructorTable, jsCast<JSWebKitCSSFilterValueConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSWebKitCSSFilterValuePrototypeTableValues[] =
{
    { "CSS_FILTER_REFERENCE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_REFERENCE), (intptr_t)0 },
    { "CSS_FILTER_GRAYSCALE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_GRAYSCALE), (intptr_t)0 },
    { "CSS_FILTER_SEPIA", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_SEPIA), (intptr_t)0 },
    { "CSS_FILTER_SATURATE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_SATURATE), (intptr_t)0 },
    { "CSS_FILTER_HUE_ROTATE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_HUE_ROTATE), (intptr_t)0 },
    { "CSS_FILTER_INVERT", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_INVERT), (intptr_t)0 },
    { "CSS_FILTER_OPACITY", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_OPACITY), (intptr_t)0 },
    { "CSS_FILTER_BRIGHTNESS", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_BRIGHTNESS), (intptr_t)0 },
    { "CSS_FILTER_CONTRAST", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_CONTRAST), (intptr_t)0 },
    { "CSS_FILTER_BLUR", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_BLUR), (intptr_t)0 },
    { "CSS_FILTER_DROP_SHADOW", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_DROP_SHADOW), (intptr_t)0 },
    { "CSS_FILTER_CUSTOM", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsWebKitCSSFilterValueCSS_FILTER_CUSTOM), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSWebKitCSSFilterValuePrototypeTable = { 34, 31, JSWebKitCSSFilterValuePrototypeTableValues, 0 };
const ClassInfo JSWebKitCSSFilterValuePrototype::s_info = { "WebKitCSSFilterValuePrototype", &Base::s_info, &JSWebKitCSSFilterValuePrototypeTable, 0, CREATE_METHOD_TABLE(JSWebKitCSSFilterValuePrototype) };

JSObject* JSWebKitCSSFilterValuePrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSWebKitCSSFilterValue>(vm, globalObject);
}

bool JSWebKitCSSFilterValuePrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWebKitCSSFilterValuePrototype* thisObject = jsCast<JSWebKitCSSFilterValuePrototype*>(object);
    return getStaticValueSlot<JSWebKitCSSFilterValuePrototype, JSObject>(exec, JSWebKitCSSFilterValuePrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSWebKitCSSFilterValue::s_info = { "WebKitCSSFilterValue", &Base::s_info, &JSWebKitCSSFilterValueTable, 0 , CREATE_METHOD_TABLE(JSWebKitCSSFilterValue) };

JSWebKitCSSFilterValue::JSWebKitCSSFilterValue(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<WebKitCSSFilterValue> impl)
    : JSCSSValueList(structure, globalObject, impl)
{
}

void JSWebKitCSSFilterValue::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSWebKitCSSFilterValue::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSWebKitCSSFilterValuePrototype::create(vm, globalObject, JSWebKitCSSFilterValuePrototype::createStructure(vm, globalObject, JSCSSValueListPrototype::self(vm, globalObject)));
}

bool JSWebKitCSSFilterValue::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSWebKitCSSFilterValue* thisObject = jsCast<JSWebKitCSSFilterValue*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    const HashEntry* entry = getStaticValueSlotEntryWithoutCaching<JSWebKitCSSFilterValue>(exec, propertyName);
    if (entry) {
        slot.setCustom(thisObject, entry->attributes(), entry->propertyGetter());
        return true;
    }
    unsigned index = propertyName.asIndex();
    if (index != PropertyName::NotAnIndex && index < thisObject->impl().length()) {
        unsigned attributes = DontDelete | ReadOnly;
        slot.setCustomIndex(thisObject, attributes, index, indexGetter);
        return true;
    }
    return getStaticValueSlot<JSWebKitCSSFilterValue, Base>(exec, JSWebKitCSSFilterValueTable, thisObject, propertyName, slot);
}

bool JSWebKitCSSFilterValue::getOwnPropertySlotByIndex(JSObject* object, ExecState* exec, unsigned index, PropertySlot& slot)
{
    JSWebKitCSSFilterValue* thisObject = jsCast<JSWebKitCSSFilterValue*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (index < thisObject->impl().length()) {
        unsigned attributes = DontDelete | ReadOnly;
        slot.setCustomIndex(thisObject, attributes, index, thisObject->indexGetter);
        return true;
    }
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

EncodedJSValue jsWebKitCSSFilterValueOperationType(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSWebKitCSSFilterValue* castedThis = jsDynamicCast<JSWebKitCSSFilterValue*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    WebKitCSSFilterValue& impl = castedThis->impl();
    JSValue result = jsNumber(impl.operationType());
    return JSValue::encode(result);
}


EncodedJSValue jsWebKitCSSFilterValueConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSWebKitCSSFilterValue* domObject = jsDynamicCast<JSWebKitCSSFilterValue*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSWebKitCSSFilterValue::getConstructor(exec->vm(), domObject->globalObject()));
}

void JSWebKitCSSFilterValue::getOwnPropertyNames(JSObject* object, ExecState* exec, PropertyNameArray& propertyNames, EnumerationMode mode)
{
    JSWebKitCSSFilterValue* thisObject = jsCast<JSWebKitCSSFilterValue*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    for (unsigned i = 0, count = thisObject->impl().length(); i < count; ++i)
        propertyNames.add(Identifier::from(exec, i));
     Base::getOwnPropertyNames(thisObject, exec, propertyNames, mode);
}

JSValue JSWebKitCSSFilterValue::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSWebKitCSSFilterValueConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

// Constant getters

EncodedJSValue jsWebKitCSSFilterValueCSS_FILTER_REFERENCE(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(1)));
}

EncodedJSValue jsWebKitCSSFilterValueCSS_FILTER_GRAYSCALE(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(2)));
}

EncodedJSValue jsWebKitCSSFilterValueCSS_FILTER_SEPIA(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(3)));
}

EncodedJSValue jsWebKitCSSFilterValueCSS_FILTER_SATURATE(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(4)));
}

EncodedJSValue jsWebKitCSSFilterValueCSS_FILTER_HUE_ROTATE(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(5)));
}

EncodedJSValue jsWebKitCSSFilterValueCSS_FILTER_INVERT(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(6)));
}

EncodedJSValue jsWebKitCSSFilterValueCSS_FILTER_OPACITY(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(7)));
}

EncodedJSValue jsWebKitCSSFilterValueCSS_FILTER_BRIGHTNESS(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(8)));
}

EncodedJSValue jsWebKitCSSFilterValueCSS_FILTER_CONTRAST(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(9)));
}

EncodedJSValue jsWebKitCSSFilterValueCSS_FILTER_BLUR(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(10)));
}

EncodedJSValue jsWebKitCSSFilterValueCSS_FILTER_DROP_SHADOW(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(11)));
}

EncodedJSValue jsWebKitCSSFilterValueCSS_FILTER_CUSTOM(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(12)));
}


EncodedJSValue JSWebKitCSSFilterValue::indexGetter(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue, unsigned index)
{
    JSWebKitCSSFilterValue* thisObj = jsCast<JSWebKitCSSFilterValue*>(JSValue::decode(slotBase));
    ASSERT_GC_OBJECT_INHERITS(thisObj, info());
    return JSValue::encode(toJS(exec, thisObj->globalObject(), thisObj->impl().item(index)));
}


}

#endif // ENABLE(CSS_FILTERS)