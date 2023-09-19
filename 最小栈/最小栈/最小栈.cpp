//设计一个支持 push ，pop ，top 操作，并能在常数时间内检索到最小元素的栈。
//
//实现 MinStack 类 :
//
//MinStack() 初始化堆栈对象。
//void push(int val) 将元素val推入堆栈。
//void pop() 删除堆栈顶部的元素。
//int top() 获取堆栈顶部的元素。
//int getMin() 获取堆栈中的最小元素。


#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stack>
#include <assert.h>
using namespace std;

template <typename T>
class valtypef
{
public:
    valtypef(T val)
    {
        _val = val;
    }
    T _val;
    size_t _count = 1;
};

class MinStack {
public:
    MinStack()
    {}

    void push(int val) {
        _st.push(val);
        if (_buf.empty())
        {
            _buf.push(valtypef<int>(val));
        }
        else
        {
            if (val == _buf.top()._val)
            {
                _buf.top()._count++;
            }
            else if (val < _buf.top()._val)
            {
                _buf.push(valtypef<int>(val));
            }
        }
    }

    void pop() {
        assert(!_st.empty());
        assert(!_buf.empty());

        if (_st.top() == _buf.top()._val)
        {
            if (_buf.top()._count == 1)
            {
                _buf.pop();
            }
            else
            {
                _buf.top()._count--;
            }
        }
        _st.pop();
    }

    int top() {
        return _st.top();

    }

    int getMin() {
        return _buf.top()._val;
    }

private:
    stack<int> _st;
    stack<valtypef<int>> _buf;
};


int main()
{

    MinStack mst;
    mst.push(10);
    mst.push(1);
    mst.push(10);
    mst.push(11);
    mst.push(11);
    mst.push(10);

    cout << mst.getMin() << endl;

	return 0;
}
