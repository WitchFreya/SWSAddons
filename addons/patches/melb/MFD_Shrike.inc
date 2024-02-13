		class MFD
		{
			class AirplaneHUD
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.212,0.769,0.204,0.2};
				enableParallax = 0;
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.04,0.04,0.1};
				helmetRight[] = {0.08,0,0};
				helmetDown[] = {0,-0.08,0};
				class Bones
				{
					class IMP_PREDICT
					{
						type = "vector";
						pos0[] = {0.5,0.5};
						pos10[] = {"0.500 + 0.2165","0.500 + 0.2165"};
						source = "impactpointtoview";
					};
				};
				turret[] = {0};
				class Draw
				{
					color[] = {0.212,0.769,0.204};
					alpha = 0.5;
					class RocketPredictor
					{
						condition = "on";
						type = "group";
						class RocketReticle
						{
							type = "line";
							width = 9;
							points[] = {{"IMP_PREDICT",{0,-0.05},1},{"IMP_PREDICT",{0,-0.015},1},{},{"IMP_PREDICT",{0,0.015},1},{"IMP_PREDICT",{0,0.05},1},{},{"IMP_PREDICT",{-0.05,0},1},{"IMP_PREDICT",{-0.015,0},1},{},{"IMP_PREDICT",{0.015,0},1},{"IMP_PREDICT",{0.05,0},1}};
						};
					};
					class Speeds
					{
						type = "group";
						condition = "on";
						class Airspeed
						{
							type = "text";
							align = "right";
							scale = 1;
							source = "speed";
							sourceScale = 3.6;
							pos[] = {{0.00,0.13},1};
							right[] = {{0.05,0.13},1};
							down[] = {{0.00,0.18},1};
						};
						class AirspeedLabel
						{
							type="text";
							source="static";
							text="SPD";
							scale=1;
							sourceScale=1;
							align="right";
							pos[] = {{0.00,0.03},1};
							right[] = {{0.05,0.03},1};
							down[] = {{0.00,0.08},1};
						};
						class Altitude
						{
							type = "text";
							source = "altitudeAGL";
							sourceScale = 1;
							sourceLength = 3;
							align = "right";
							scale = 1;
							pos[] = {{0.83,0.13},1};
							right[] = {{0.88,0.13},1};
							down[] = {{0.83,0.18},1};
						};
						class RiseFall
						{
							type="text";
							source="vspeed";
							sourceScale=1;
							sourceLength=2;
							align="left";
							scale=1;
							pos[] = {{0.90,0.13},1};
							right[] = {{0.95,0.13},1};
							down[] = {{0.90,0.18},1};
						};
					};
				};
			};
		};