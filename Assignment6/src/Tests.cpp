/* Ilya Pavlov st129535@student.spbu.ru
	assignment6
*/
#include "Template.h"
#include <gtest/gtest.h>

//Testing with Classes
TEST(TestClasses, Class1TestTrue)
{
    Class1 obj;
    std::vector<double> v = {1,2,3};

    Temp<Class1> t_obj(obj, 1, v);
    EXPECT_EQ(t_obj.foo(), true);

}
TEST(TestClasses, Class1TestFalse)
{
    Class1 obj;
    std::vector<double> v = {1,2,3};

    Temp<Class1> t_obj(obj, 0, v);
    EXPECT_EQ(t_obj.foo(), false);
}

TEST(TestClasses, Class2TestTrue)
{
    Class2 obj;
    std::vector<double> v = {1,2,3};

    Temp<Class2> t_obj(obj, 1, v);
    EXPECT_EQ(t_obj.foo(), true);

}
TEST(TestClasses, Class2TestFalse)
{
    Class2 obj;
    std::vector<double> v;

    Temp<Class2> t_obj(obj, 0, v);
    EXPECT_EQ(t_obj.foo(), false);
}

TEST(TestClasses, Class3TestTrue)
{
    Class3 obj;
    std::vector<double> v = {1,2,3};

    Temp<Class3> t_obj(obj, -3, v);
    EXPECT_EQ(t_obj.foo(), true);
}
TEST(TestClasses, Class3TestFalse)
{
    Class3 obj;
    std::vector<double> v = {1,2,3};

    Temp<Class3> t_obj(obj, 3, v);
    EXPECT_EQ(t_obj.foo(), false);
}

//Testing with Specialization
TEST(TestSpec, IntTest)
{
    int obj = 52;
    std::vector<double> v = {1,2,3};

    Temp<int> t_obj(obj, 1, v);
    EXPECT_EQ(t_obj.foo(),true);
}
TEST(TestSpec, DoubleTest)
{
    double obj = 52.52;
    std::vector<double> v = {1,2,3};

    Temp<double> t_obj(obj, 1, v);
    EXPECT_EQ(t_obj.foo(),false);
}
