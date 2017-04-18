## vector 高级编程

1. 元素访问

```
c.at(index);
c[index];
c front();                  //最前面的元素
c back();                   //最后面的元素
```

2. 迭代器相关函数

```
begin()     //第一个元素，返回迭代器类型
end()       //最后一个元素,返回迭代器类型
rbegin()    //逆向迭代的第一个元素，返回反向迭代器类型
rend()      //逆向迭代的最后一个元素的下一个位置，返回反向迭代器类型
```

3. 元素查找和搜索

```
find()
    原型:
        template <classinputInterator,class T> inline
            inputInterator find(inputInterator first,inputInterator last,const T& value)

find_if()           //有条件查找
    原型
        template <classinputInterator,class T,class Predicate> inline
            inputInterator find(inputInterator first,inputInterator last,Predicate predicate)
均返回迭代器类型
```

4. 插入元素
```
insert()
push_back()
```

5. 元素删除
```
remove()
pop_back()                  //只能删除最后一个
erase()                     //删除一个或多个指定元素
clear()                     //全部删除
```