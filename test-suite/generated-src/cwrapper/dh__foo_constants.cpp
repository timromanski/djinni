// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_constants.djinni

#include <iostream> // for debugging
#include <cassert>
#include "wrapper_marshal.hpp"
#include "foo_constants.hpp"

#include "dh__foo_constants.hpp"

static void(*s_py_callback_foo_constants___delete)(DjinniRecordHandle * );
void foo_constants_add_callback___delete(void(* ptr)(DjinniRecordHandle * )) {
    s_py_callback_foo_constants___delete = ptr;
}

void foo_constants___delete(DjinniRecordHandle * drh) {
    s_py_callback_foo_constants___delete(drh);
}
void optional_foo_constants___delete(DjinniOptionalRecordHandle * drh) {
    s_py_callback_foo_constants___delete((DjinniRecordHandle *) drh); // can't static cast, find better way
}
static int32_t ( * s_py_callback_foo_constants_get_foo_constants_f1)(DjinniRecordHandle *);

void foo_constants_add_callback_get_foo_constants_f1(int32_t( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_foo_constants_get_foo_constants_f1 = ptr;
}

static DjinniString * ( * s_py_callback_foo_constants_get_foo_constants_f2)(DjinniRecordHandle *);

void foo_constants_add_callback_get_foo_constants_f2(DjinniString *( * ptr)(DjinniRecordHandle *)) {
    s_py_callback_foo_constants_get_foo_constants_f2 = ptr;
}

static DjinniRecordHandle * ( * s_py_callback_foo_constants_python_create_foo_constants)(int32_t,DjinniString *);

void foo_constants_add_callback_python_create_foo_constants(DjinniRecordHandle *( * ptr)(int32_t,DjinniString *)) {
    s_py_callback_foo_constants_python_create_foo_constants = ptr;
}

djinni::Handle<DjinniRecordHandle> DjinniFooConstants::fromCpp(const ::testsuite::FooConstants& dr) {
    auto  _field_some_string = DjinniString::fromCpp(dr.some_string);

    djinni::Handle<DjinniRecordHandle> _aux(
        s_py_callback_foo_constants_python_create_foo_constants(
            dr.some_integer,
            _field_some_string.release()),
        foo_constants___delete);
    return _aux;
}

::testsuite::FooConstants DjinniFooConstants::toCpp(djinni::Handle<DjinniRecordHandle> dh) {
    std::unique_ptr<DjinniString> _field_some_string(s_py_callback_foo_constants_get_foo_constants_f2(dh.get()));

    auto _aux = ::testsuite::FooConstants(
        s_py_callback_foo_constants_get_foo_constants_f1(dh.get()),
        DjinniString::toCpp(std::move( _field_some_string)));
    return _aux;
}

djinni::Handle<DjinniOptionalRecordHandle> DjinniFooConstants::fromCpp(std::experimental::optional<::testsuite::FooConstants> dc) {
    if (dc == std::experimental::nullopt) {
        return nullptr;
    }
    return djinni::optionals::toOptionalHandle(std::move(DjinniFooConstants::fromCpp(std::move(* dc))), optional_foo_constants___delete);
}

std::experimental::optional<::testsuite::FooConstants>DjinniFooConstants::toCpp(djinni::Handle<DjinniOptionalRecordHandle> dh) {
     if (dh) {
        return std::experimental::optional<::testsuite::FooConstants>(DjinniFooConstants::toCpp(djinni::optionals::fromOptionalHandle(std::move(dh), foo_constants___delete)));
    }
    return std::experimental::nullopt;
}

