# D2D
D2D 库使用COM组件提供

COM组件 
类似于C#和java的Reflection


**反射**
这种动态的获取类的信息以及动态调用一个对象的方法的机制叫做反射。


>      反射提供的主要功能：
>      1.在运行时判断任意一个对象所属的类
>      2.在运行时构造一个类的对象
>      3.在运行时判断一个类所具有的属性和方法
>      4.在运行时调用一个对象的方法

>      实现反射的过程：
>      1.加载一个类
>      2.根据这个类动态创建一个对象
>      3.动态得到这个对象的方法
>      4.调用这个对象的方法

so let's test it in C#


    using System.reflection
    Type type = Type.GetType("ReflectTest.Person");             //get type
    Assembly assembly = Assembly.GetAssembly(type);             // loading this type
    Object o = assembly.CreateInstance("ReflectTest.Person");   //Instantiation


补充了反射的相关东西 接着D2D


CORBA:（此处需要补充）

COM:CORBA的微软版本
使用COM 技术的主要OFFICE产品 "OLE"和”DDE“






