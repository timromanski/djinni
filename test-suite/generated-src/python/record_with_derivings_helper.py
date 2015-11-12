# AUTOGENERATED FILE - DO NOT MODIFY!
# This file generated by Djinni from derivings.djinni

from djinni.support import MultiSet # default imported in all files
from djinni.exception import CPyException # default imported in all files
from djinni.pycffi_marshal import CPyPrimitive, CPyRecord, CPyString
from PyCFFIlib_cffi import ffi, lib

from djinni import exception # this forces run of __init__.py which gives cpp option to call back into py to create exception

from record_with_derivings import RecordWithDerivings

class RecordWithDerivingsHelper:
    @staticmethod
    def release(c_ptr):
        assert c_ptr in c_data_set
        c_data_set.remove(ffi.cast("void*", c_ptr))

    @ffi.callback("int32_t(struct DjinniRecordHandle *)")
    def get_record_with_derivings_f1(cself):
        try:
            _ret = CPyPrimitive.fromPy(CPyRecord.toPy(None, cself).key1)
            return _ret
        except Exception as _djinni_py_e:
            CPyException.setExceptionFromPy(_djinni_py_e)
            return ffi.NULL

    @ffi.callback("struct DjinniString *(struct DjinniRecordHandle *)")
    def get_record_with_derivings_f2(cself):
        try:
            with CPyString.fromPy(CPyRecord.toPy(None, cself).key2) as py_obj:
                _ret = py_obj.release_djinni_string()
                assert _ret != ffi.NULL
                return _ret
        except Exception as _djinni_py_e:
            CPyException.setExceptionFromPy(_djinni_py_e)
            return ffi.NULL

    @ffi.callback("struct DjinniRecordHandle *(int32_t,struct DjinniString *)")
    def python_create_record_with_derivings(key1,key2):
        py_rec = RecordWithDerivings(
            CPyPrimitive.toPy(key1),
            CPyString.toPy(key2))
        return CPyRecord.fromPy(RecordWithDerivings.c_data_set, py_rec) #to do: can be optional?

    @ffi.callback("void (struct DjinniRecordHandle *)")
    def __delete(dh):
        assert dh in RecordWithDerivings.c_data_set
        RecordWithDerivings.c_data_set.remove(dh)

    @staticmethod
    def _add_callbacks():
        lib.record_with_derivings_add_callback_get_record_with_derivings_f1(RecordWithDerivingsHelper.get_record_with_derivings_f1)
        lib.record_with_derivings_add_callback_get_record_with_derivings_f2(RecordWithDerivingsHelper.get_record_with_derivings_f2)
        lib.record_with_derivings_add_callback_python_create_record_with_derivings(RecordWithDerivingsHelper.python_create_record_with_derivings)
        lib.record_with_derivings_add_callback___delete(RecordWithDerivingsHelper.__delete)

RecordWithDerivingsHelper._add_callbacks()

