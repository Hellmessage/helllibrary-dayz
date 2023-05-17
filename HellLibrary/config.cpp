class CfgPatches {
    class HellLibrary_Script {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]= {
            "DZ_Data"
        };
    };
};

class CfgMods {
	class HellLibrary {
		dir = "HellLibrary";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "HellLibrary";
		credits = "Hellmessage";
		creditsJson = "";
		author = "Hellmessage";
		authorID = "0"; 
		version = "0.1"; 
		extra = 0;
		type = "mod";
		
		dependencies[] = { "Game", "World", "Mission" };
		
		class defs {
			class gameScriptModule {
				value = "";
				files[] = {"HellLibrary/Scripts/3_Game"};
			};
			class worldScriptModule {
				value = "";
				files[] = {"HellLibrary/Scripts/4_World"};
			};
			class missionScriptModule {
				value = "";
				files[] = {"HellLibrary/Scripts/5_Mission"};
			};
		};
	};
};