#define PY_SSIZE_T_CLEAN
#include <Python.h>

void print_python_list_info(PyObject *p)
{
	PyListObject *list = (PyListObject *)p;
	Py_ssize_t size = Py_SIZE(list);
	Py_ssize_t alloc = list->allocated;
	Py_ssize_t i;

	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", alloc);

	for (i = 0; i < size; i++)
	{
		printf("Element %ld: %s\n", i, Py_TYPE(list->ob_item[i])->tp_name);
	}
}

int main(int argc, char *argv[])
{
    PyObject *p;
    
    /* Initialize the Python interpreter */
    Py_Initialize();
    
    /* Create a Python list*/
    p = PyList_New(0);
    
    /* Call the function to print list information */
    print_python_list_info(p);
    
    /* Finalize the Python interpreter */
    Py_Finalize();

    return (0);
}
