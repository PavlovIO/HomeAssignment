/* Ilya Pavlov st129535@student.spbu.ru
	assignment3
*/
#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"
#include <gtest/gtest.h>
// Тесты для класса Ultimate
class UltimateTest : public ::testing::Test
{
protected:
    Ultimate* ultimate;

    void SetUp() override
    {
        ultimate = new Ultimate(Ultimate::Type::Heal);
    }

    void TearDown() override
    {
        delete ultimate;
    }
};

TEST_F(UltimateTest, ConstructorSetsCorrectTypeAndStats)
{
    EXPECT_EQ(ultimate->ultimate_type(), "Heal");

    Ultimate buff_ultimate(Ultimate::Type::Buff);
    EXPECT_EQ(buff_ultimate.ultimate_type(), "Buff");

    Ultimate shield_ultimate(Ultimate::Type::Shield);
    EXPECT_EQ(shield_ultimate.ultimate_type(), "Shield");

    Ultimate no_ultimate(Ultimate::Type::No_ultimate);
    EXPECT_EQ(no_ultimate.ultimate_type(), "No_ultimate");
}

TEST_F(UltimateTest, UseSetsIsUsedFlag)
{
    EXPECT_FALSE(ultimate->get_is_used());
    ultimate->use();
    EXPECT_TRUE(ultimate->get_is_used());
}


// Тесты для класса Autobot
class AutobotTest : public ::testing::Test
{
protected:
    Autobot* autobot;

    void SetUp() override
    {

        autobot = new Autobot("Truck");
    }

    void TearDown() override
    {
        delete autobot;
    }
};

TEST_F(AutobotTest, ConstructorSetsCorrectForm)
{
    EXPECT_EQ(autobot->get_form(), "Truck");

    Autobot car_autobot("Car");
    EXPECT_EQ(car_autobot.get_form(), "Car");
}

TEST_F(AutobotTest, TransformTogglesTransformationState)
{
    EXPECT_FALSE(autobot->get_is_transformed());
    autobot->Transform();
    EXPECT_TRUE(autobot->get_is_transformed());
    autobot->Transform();
    EXPECT_FALSE(autobot->get_is_transformed());
}

TEST_F(AutobotTest, SetAndGetForm)
{
    autobot->set_form("Plane");
    EXPECT_EQ(autobot->get_form(), "Plane");
}

TEST_F(AutobotTest, SetAndGetCourage)
{
    autobot->set_courage(10);
    EXPECT_EQ(autobot->get_courage(), 10);
    autobot->set_courage(5);
    EXPECT_EQ(autobot->get_courage(), 5);
}

// Тесты для класса Decepticon
class DecepticonTest : public ::testing::Test
{
protected:
    Decepticon* decepticon;

    void SetUp() override
    {
        decepticon = new Decepticon("Jet");
    }

    void TearDown() override
    {
        delete decepticon;
    }
};

TEST_F(DecepticonTest, ConstructorSetsCorrectForm)
{
    EXPECT_EQ(decepticon->get_form(), "Jet");

    Decepticon tank_decepticon("Tank");
    EXPECT_EQ(tank_decepticon.get_form(), "Tank");
}

TEST_F(DecepticonTest, TransformTogglesTransformationState)
{
    EXPECT_FALSE(decepticon->get_is_transformed());
    decepticon->Transform();
    EXPECT_TRUE(decepticon->get_is_transformed());
    decepticon->Transform();
    EXPECT_FALSE(decepticon->get_is_transformed());
}

TEST_F(DecepticonTest, SetAndGetForm)
{
    decepticon->set_form("Helicopter");
    EXPECT_EQ(decepticon->get_form(), "Helicopter");
}

TEST_F(DecepticonTest, SetAndGetAnger)
{
    decepticon->set_anger(20);
    EXPECT_EQ(decepticon->get_anger(), 20);
    decepticon->set_anger(15);
    EXPECT_EQ(decepticon->get_anger(), 15);
}

// Тесты для класса Dinobot
class DinobotTest : public ::testing::Test
{
protected:
    Dinobot* dinobot;

    void SetUp() override
    {
        dinobot = new Dinobot("Velociraptor");
    }

    void TearDown() override
    {
        delete dinobot;
    }
};

TEST_F(DinobotTest, ConstructorSetsCorrectForm)
{
    EXPECT_EQ(dinobot->get_form(), "Velociraptor");

    Dinobot t_rex("Tiranasaurus");
    EXPECT_EQ(t_rex.get_form(), "Tiranasaurus");
}

TEST_F(DinobotTest, GrowlReturnsTrue)
{
    EXPECT_TRUE(dinobot->growl());
}

TEST_F(DinobotTest, StartHuntSetsIsHunting)
{
    EXPECT_FALSE(dinobot->get_is_hunting());
    dinobot->start_hunt();
    EXPECT_TRUE(dinobot->get_is_hunting());
}

TEST_F(DinobotTest, SetAndGetIsHunting)
{
    dinobot->set_is_hunting(true);
    EXPECT_TRUE(dinobot->get_is_hunting());

    dinobot->set_is_hunting(false);
    EXPECT_FALSE(dinobot->get_is_hunting());
}

// Тесты для класса Transformer
class TransformerTest : public ::testing::Test
{
protected:
    Gun* gun;
    Ultimate* ultimate;
    Transformer* transformer;

    void SetUp() override
    {
        gun = new Gun(Gun::Type::Pistol);
        ultimate = new Ultimate(Ultimate::Type::Buff);
        transformer = new Transformer(gun, ultimate, 0, 0);
    }

    void TearDown() override
    {
        delete transformer;
    }
};

TEST_F(TransformerTest, MoveChangesPosition)
{
    transformer->move();
    EXPECT_EQ(transformer->get_x_pos(), 0);
    EXPECT_EQ(transformer->get_y_pos(), 0);
}

TEST_F(TransformerTest, TurnChangesDirection)
{
    transformer->turn("right");
    EXPECT_EQ(transformer->get_dir(), "East");

    transformer->turn("around");
    EXPECT_EQ(transformer->get_dir(), "West");
}

// Тесты для класса Gun
class GunTest : public ::testing::Test
{
protected:
    Gun* gun;

    void SetUp() override
    {
        gun = new Gun(Gun::Type::Rifle);
    }

    void TearDown() override
    {
        delete gun;
    }
};

TEST_F(GunTest, ConstructorSetsCorrectStats)
{
    EXPECT_EQ(gun->get_stats().damage, 30);
    EXPECT_EQ(gun->get_stats().range, 100);
    EXPECT_EQ(gun->get_stats().fire_rate, 2);
}

TEST_F(GunTest, GetStatsOutputsCorrectInformation)
{
    std::ostringstream oss;
    std::streambuf* p_cout_streambuf = std::cout.rdbuf();
    std::cout.rdbuf(oss.rdbuf());

    gun->get_stats();
    std::cout.rdbuf(p_cout_streambuf);

    EXPECT_EQ(oss.str(), "Type: Rifle, Damage: 30, Range: 100, Fire Rate: 2\n");
}

// Тесты для класса Direction
class DirectionTest : public ::testing::Test
{
protected:
    Direction* direction;

    void SetUp() override
    {
        direction = new Direction(Direction::Type::North);
    }

    void TearDown() override
    {
        delete direction;
    }
};

TEST_F(DirectionTest, TurnRightChangesDirection)
{
    direction->turn_right();
    EXPECT_EQ(direction->get_direction(), "East");
    direction->turn_right();
    EXPECT_EQ(direction->get_direction(), "South");
}

TEST_F(DirectionTest, TurnLeftChangesDirection)
{
    direction->turn_left();
    EXPECT_EQ(direction->get_direction(), "West");
}

TEST_F(DirectionTest, TurnAroundChangesDirection)
{
    direction->turn_around();
    EXPECT_EQ(direction->get_direction(), "South");
}
