#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginQ802 : public WorldPlugin {
    public: 
		WorldPluginQ802() : WorldPlugin() {
            printf(" ____ ____ ____ ____ ____ ____ ____ _________ ____ ____ _________ ____ ____ ____ ____ ____ \n");
            printf("||W |||e |||l |||c |||o |||m |||e |||       |||t |||o |||       |||Q |||- |||8 |||0 |||2 ||\n");
            printf("||__|||__|||__|||__|||__|||__|||__|||_______|||__|||__|||_______|||__|||__|||__|||__|||__||\n");
            printf("|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/_______\\|/__\\|/__\\|/_______\\|/__\\|/__\\|/__\\|/__\\|/__\\|\n");
            printf("\nWelcome to Josh's World!\n");
    	}

    public: 
		void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) {}
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginQ802)
}

