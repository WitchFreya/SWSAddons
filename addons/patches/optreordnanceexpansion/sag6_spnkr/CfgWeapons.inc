class CfgWeapons {
  class OPTRE_UnguidedLauncher_Base;
  //--- Begging and pleading you people to stop pushing broken mods. How do you even DO this???
  //--- Even better, I informed the mod author and he won't fix it because 'It's the same as how OPTRE did it!' (spoiler: it is not)
  class OPTRE_M41_SSR : OPTRE_UnguidedLauncher_Base {
    class Single;
    class TopDown : Single {
      delete sound;
      delete soundBegin;
      delete soundBeginWater;
      delete soundClosure;
      delete soundEnd;
      delete soundLoop;
      delete sounds;
      sound[] = {"", 10, 1};
      soundBegin[] = {"sound", 1};
      soundBeginWater[] = {"sound", 1};
      soundClosure[] = {"sound", 1};
      soundEnd[] = {};
      soundLoop[] = {};
      sounds[] = {"StandardSound"};

      class BaseSoundModeType {
        delete begin1;
        delete soundBegin;
        delete soundSetShot;
        begin1[] = {"OPTRE_Weapons\Rockets\data\sounds\rocket_1.wss", 2.5, 1, 1500};
        soundBegin[] = {"begin1", 1};
        soundSetShot[] = {"Launcher_Titan_Shot_SoundSet", "Launcher_Titan_Tail_SoundSet"};
      };
    };
  };
};
