#include <gtest/gtest.h>

// gtest is c++ testing framework, but crazy widely used
extern "C" {
    void	ft_ft(int *nbr);
    void    ft_ultimate_ft(int *********nbr);
};


// TEST(test_group, test_case)

TEST(ft_ft, test) {
    int a = 0;
    ft_ft(&a);
    EXPECT_EQ(42, a);
}

TEST(ft_ultimate_ft, 42) {
	int	a;
	int	*ptr1 = &a;
	int	**ptr2 = &ptr1;
	int	***ptr3 = &ptr2;
	int	****ptr4 = &ptr3;
	int	*****ptr5 = &ptr4;
	int	******ptr6 = &ptr5;
	int	*******ptr7 = &ptr6;
	int	********ptr8 = &ptr7;
	int	*********ultimate_ptr = &ptr8;

    a = 0;
	ft_ultimate_ft(ultimate_ptr);
    EXPECT_EQ(41, a);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
