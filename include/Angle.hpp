//头文件
class Angle
{
private:          //成员属性设置为私有 只能在内部访问 外部无法直接修改
    double V0;

public:             //成员属性设置为共有 类的内外部均可访问与调用
    Angle (double m_v0);   //构造函数声明
    double solver(double d); //声明成员函数
};
