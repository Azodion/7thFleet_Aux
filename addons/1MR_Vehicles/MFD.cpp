	
	class MFD
		{
			class AirplaneHUD
			{
				class Bones
				{
				};
				class Draw
				{
				};
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				helmetMountedDisplay=1;
				helmetPosition[]={0,0,0};
				helmetRight[]={0,0,0};
				helmetDown[]={0,0,0};
			};
			class Kimi_HUD_1
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				class Bones
				{
					class GunnerAim
					{
						type="vector";
						source="weapon";
						pos0[]=
						{
							0.5,
							"0.9 - 0.04 + 0.012"
						};
						pos10[]=
						{
							"0.5 + 0.0111",
							"0.9 - 0.04 + 0.012 + 0.0133"
						};
					};
					class Target
					{
						source="target";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.85000002,0.85000002};
					};
					class Velocity
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.5};
						pos10[]={0.64999998,0.64999998};
					};
					class Velocity_slip
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.84500003};
						pos10[]={0.52999997,0.84500003};
					};
					class VspeedBone
					{
						type="linear";
						source="vspeed";
						sourceScale=1.9685;
						min=-20;
						max=20;
						minPos[]={0.93000001,0.2};
						maxPos[]={0.93000001,0.80000001};
					};
					class RadarAltitudeBone
					{
						type="linear";
						source="altitudeAGL";
						sourceScale=3.2808399;
						min=0;
						max=200;
						minPos[]={0.96499997,0.2};
						maxPos[]={0.96499997,0.80000001};
					};
					class HorizonBankRot
					{
						type="rotational";
						source="horizonBank";
						center[]={0.5,0.5};
						min=-3.1415999;
						max=3.1415999;
						minAngle=-180;
						maxAngle=180;
						aspectRatio=1;
					};
					class ForwardVec
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.25,0.25};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.5,0.5};
						pos10[]={0.75,0.75};
					};
					class Level0
					{
						type="horizon";
						pos0[]={0.5,0.5};
						pos10[]={0.77999997,0.77999997};
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
				};
				class Draw
				{
					color[]={0.18000001,1,0.18000001};
					alpha=1;
					condition="on";
					class Horizont
					{
						clipTL[]={0.15000001,0.15000001};
						clipBR[]={0.85000002,0.85000002};
						class Dimmed
						{
							class Level0
							{
								type="line";
								points[]=
								{
									
									{
										"Level0",
										{-0.41999999,0},
										1
									},
									
									{
										"Level0",
										{-0.38,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.37,0},
										1
									},
									
									{
										"Level0",
										{-0.33000001,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.31999999,0},
										1
									},
									
									{
										"Level0",
										{-0.28,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.27000001,0},
										1
									},
									
									{
										"Level0",
										{-0.23,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.22,0},
										1
									},
									
									{
										"Level0",
										{-0.18000001,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.17,0},
										1
									},
									
									{
										"Level0",
										{-0.13,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.12,0},
										1
									},
									
									{
										"Level0",
										{-0.079999998,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.41999999,0},
										1
									},
									
									{
										"Level0",
										{0.38,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.37,0},
										1
									},
									
									{
										"Level0",
										{0.33000001,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.31999999,0},
										1
									},
									
									{
										"Level0",
										{0.28,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.27000001,0},
										1
									},
									
									{
										"Level0",
										{0.23,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.22,0},
										1
									},
									
									{
										"Level0",
										{0.18000001,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.17,0},
										1
									},
									
									{
										"Level0",
										{0.13,0},
										1
									},
									{},
									
									{
										"Level0",
										{0.12,0},
										1
									},
									
									{
										"Level0",
										{0.079999998,0},
										1
									}
								};
							};
						};
					};
					class HorizonBankRot
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"HorizonBankRot",
								{0,0.25},
								1
							},
							
							{
								"HorizonBankRot",
								{-0.0099999998,0.23},
								1
							},
							
							{
								"HorizonBankRot",
								{0.0099999998,0.23},
								1
							},
							
							{
								"HorizonBankRot",
								{0,0.25},
								1
							}
						};
					};
					class Static_HAD_BOX
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=5;
						points[]=
						{
							
							{
								
								{
									"0.5-0.1",
									"0.9-0.04"
								},
								1
							},
							
							{
								
								{
									"0.5-0.1",
									"0.9+0.04"
								},
								1
							},
							
							{
								
								{
									"0.5+0.1",
									"0.9+0.04"
								},
								1
							},
							
							{
								
								{
									"0.5+0.1",
									"0.9-0.04"
								},
								1
							},
							
							{
								
								{
									"0.5-0.1",
									"0.9-0.04"
								},
								1
							},
							{},
							
							{
								
								{
									"0.5-0.1",
									"0.9-0.04+0.012"
								},
								1
							},
							
							{
								
								{
									"0.5-0.092",
									"0.9-0.04+0.012"
								},
								1
							},
							{},
							
							{
								
								{
									"0.5+0.1",
									"0.9-0.04+0.012"
								},
								1
							},
							
							{
								
								{
									"0.5+0.092",
									"0.9-0.04+0.012"
								},
								1
							},
							{},
							
							{
								
								{
									0.5,
									"0.9-0.04"
								},
								1
							},
							
							{
								
								{
									0.5,
									"0.9-0.032"
								},
								1
							},
							{},
							
							{
								
								{
									0.5,
									"0.9+0.04"
								},
								1
							},
							
							{
								
								{
									0.5,
									"0.9+0.032"
								},
								1
							},
							{}
						};
					};
					class Gunner_HAD
					{
						type="line";
						width=6;
						points[]=
						{
							
							{
								"GunnerAim",
								{-0.015,-0.0080000004},
								1
							},
							
							{
								"GunnerAim",
								{-0.015,0.0080000004},
								1
							},
							
							{
								"GunnerAim",
								{0.015,0.0080000004},
								1
							},
							
							{
								"GunnerAim",
								{0.015,-0.0080000004},
								1
							},
							
							{
								"GunnerAim",
								{-0.015,-0.0080000004},
								1
							}
						};
					};
					class Slip_ball_group
					{
						class Slip_bars
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									
									{
										"0.5-0.018",
										"0.9-0.04"
									},
									1
								},
								
								{
									
									{
										"0.5-0.018",
										"0.9-0.075"
									},
									1
								},
								{},
								
								{
									
									{
										"0.5+0.018",
										"0.9-0.04"
									},
									1
								},
								
								{
									
									{
										"0.5+0.018",
										"0.9-0.075"
									},
									1
								}
							};
						};
						class Slip_ball
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.75",
										"-0.02 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.75",
										"-0.01732 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.75",
										"-0.0099999998 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.75",
										"0 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.75",
										"0.0099999998 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.75",
										"0.01732 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.75",
										"0.02 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.75",
										"0.01732 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.75",
										"0.0099999998 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.75",
										"0 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.75",
										"-0.0099999998 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.75",
										"-0.01732 * 0.75"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.75",
										"-0.02 * 0.75"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.6",
										"-0.02 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.6",
										"-0.01732 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.6",
										"-0.0099999998 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.6",
										"0 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.6",
										"0.0099999998 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.6",
										"0.01732 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.6",
										"0.02 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.6",
										"0.01732 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.6",
										"0.0099999998 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.6",
										"0 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.6",
										"-0.0099999998 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.6",
										"-0.01732 * 0.6"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.6",
										"-0.02 * 0.6"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.5",
										"-0.02 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.5",
										"-0.01732 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.5",
										"-0.0099999998 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.5",
										"0 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.5",
										"0.0099999998 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.5",
										"0.01732 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.5",
										"0.02 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.5",
										"0.01732 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.5",
										"0.0099999998 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.5",
										"0 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.5",
										"-0.0099999998 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.5",
										"-0.01732 * 0.5"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.5",
										"-0.02 * 0.5"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.4",
										"-0.02 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.4",
										"-0.01732 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.4",
										"-0.0099999998 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.4",
										"0 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.4",
										"0.0099999998 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.4",
										"0.01732 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.4",
										"0.02 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.4",
										"0.01732 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.4",
										"0.0099999998 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.4",
										"0 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.4",
										"-0.0099999998 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.4",
										"-0.01732 * 0.4"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.4",
										"-0.02 * 0.4"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.30",
										"-0.02 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.30",
										"-0.01732 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.30",
										"-0.0099999998 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.30",
										"0 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.30",
										"0.0099999998 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.30",
										"0.01732 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.30",
										"0.02 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.30",
										"0.01732 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.30",
										"0.0099999998 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.30",
										"0 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.30",
										"-0.0099999998 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.30",
										"-0.01732 * 0.30"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.30",
										"-0.02 * 0.30"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.20",
										"-0.02 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.20",
										"-0.01732 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.20",
										"-0.0099999998 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.20",
										"0 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.20",
										"0.0099999998 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.20",
										"0.01732 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.20",
										"0.02 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.20",
										"0.01732 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.20",
										"0.0099999998 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.20",
										"0 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.20",
										"-0.0099999998 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.20",
										"-0.01732 * 0.20"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.20",
										"-0.02 * 0.20"
									},
									1
								},
								{},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.1",
										"-0.02 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.1",
										"-0.01732 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.1",
										"-0.0099999998 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.02 * 0.1",
										"0 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.01732 * 0.1",
										"0.0099999998 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0.0099999998 * 0.1",
										"0.01732 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.1",
										"0.02 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.1",
										"0.01732 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.1",
										"0.0099999998 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.02 * 0.1",
										"0 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.01732 * 0.1",
										"-0.0099999998 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"-0.0099999998 * 0.1",
										"-0.01732 * 0.1"
									},
									1
								},
								
								{
									"Velocity_slip",
									1,
									
									{
										"0 * 0.1",
										"-0.02 * 0.1"
									},
									1
								}
							};
						};
					};
					class Centerline
					{
						type="line";
						width=5;
						points[]=
						{
							
							{
								{0.5,0.47999999},
								1
							},
							
							{
								{0.5,0.44999999},
								1
							},
							{},
							
							{
								{0.5,0.51999998},
								1
							},
							
							{
								{0.5,0.55000001},
								1
							},
							{},
							
							{
								{0.47999999,0.5},
								1
							},
							
							{
								{0.44999999,0.5},
								1
							},
							{},
							
							{
								{0.51999998,0.5},
								1
							},
							
							{
								{0.55000001,0.5},
								1
							},
							{}
						};
					};
					class WeaponName
					{
						type="text";
						source="weapon";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.61000001,0.86000001},
							1
						};
						right[]=
						{
							{0.64999998,0.86000001},
							1
						};
						down[]=
						{
							{0.61000001,0.89999998},
							1
						};
					};
					class WP
					{
						condition="wpvalid - autohover";
						class WPdist
						{
							type="text";
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.235,0.77403802},
								1
							};
							right[]=
							{
								{0.27500001,0.77403802},
								1
							};
							down[]=
							{
								{0.235,0.80155998},
								1
							};
						};
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							sourceLength=2;
							align="right";
							scale=1;
							pos[]=
							{
								{0.096000001,0.77600402},
								1
							};
							right[]=
							{
								{0.126,0.77600402},
								1
							};
							down[]=
							{
								{0.096000001,0.79959399},
								1
							};
						};
						class WPstatic
						{
							type="text";
							source="static";
							text="W";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.075000003,0.77499998},
								1
							};
							right[]=
							{
								{0.105,0.77499998},
								1
							};
							down[]=
							{
								{0.075000003,0.80000001},
								1
							};
						};
						class WPAuto
						{
							type="text";
							source="static";
							text="A";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								
								{
									"0.075 +0.035",
									0.80000001
								},
								1
							};
							right[]=
							{
								{0.14,0.80000001},
								1
							};
							down[]=
							{
								
								{
									"0.075 +0.035",
									0.82499999
								},
								1
							};
						};
						class WPKM
						{
							type="text";
							source="static";
							text="KM";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								
								{
									"0.075 +0.16",
									0.77499998
								},
								1
							};
							right[]=
							{
								{0.26499999,0.77499998},
								1
							};
							down[]=
							{
								
								{
									"0.075 +0.16",
									0.80299997
								},
								1
							};
						};
						class WPTime
						{
							type="text";
							source="static";
							text="-:--";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								
								{
									"0.075 +0.11",
									0.80000001
								},
								1
							};
							right[]=
							{
								{0.215,0.80000001},
								1
							};
							down[]=
							{
								
								{
									"0.075 +0.11",
									0.82499999
								},
								1
							};
						};
						class WP
						{
							width=2;
							type="line";
							points[]=
							{
								
								{
									"WPPoint",
									1,
									"LimitWaypoint",
									1,
									{-0.02,0.039999999},
									1
								},
								
								{
									"WPPoint",
									1,
									"LimitWaypoint",
									1,
									{0,0.02},
									1
								},
								
								{
									"WPPoint",
									1,
									"LimitWaypoint",
									1,
									{0.02,0.039999999},
									1
								},
								{}
							};
						};
					};
					class Ammo_GUN
					{
						type="group";
						condition="mgun";
						class Ammo_count_GUN
						{
							type="text";
							source="ammo";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.61000001,0.88999999},
								1
							};
							right[]=
							{
								{0.64999998,0.88999999},
								1
							};
							down[]=
							{
								{0.61000001,0.93000001},
								1
							};
						};
					};
					class Ammo_RKT
					{
						type="group";
						condition="rocket";
						class Ammo_count_RKT
						{
							type="text";
							source="ammo";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.61000001,0.88999999},
								1
							};
							right[]=
							{
								{0.64999998,0.88999999},
								1
							};
							down[]=
							{
								{0.61000001,0.93000001},
								1
							};
						};
					};
					class Ammo_AGM
					{
						type="group";
						condition="AAmissile";
						class Ammo_count_AGM
						{
							type="text";
							source="ammo";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.61000001,0.88999999},
								1
							};
							right[]=
							{
								{0.64999998,0.88999999},
								1
							};
							down[]=
							{
								{0.61000001,0.93000001},
								1
							};
						};
					};
					class Ammo_AAM
					{
						type="group";
						condition="ATmissile";
						class Ammo_count_AAM
						{
							type="text";
							source="ammo";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.61000001,0.88999999},
								1
							};
							right[]=
							{
								{0.64999998,0.88999999},
								1
							};
							down[]=
							{
								{0.61000001,0.93000001},
								1
							};
						};
					};
					class LightsGroup
					{
						type="group";
						condition="lights";
						class LightsText
						{
							type="text";
							source="static";
							text="LIGHTS";
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.055"
								},
								1
							};
							right[]=
							{
								
								{
									0.07,
									"0.53 + 0.055"
								},
								1
							};
							down[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.095"
								},
								1
							};
						};
					};
					class CollisionLightsGroup
					{
						type="group";
						condition="collisionlights";
						class CollisionLightsText
						{
							type="text";
							source="static";
							text="A-COL";
							align="right";
							scale=1;
							pos[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.105"
								},
								1
							};
							right[]=
							{
								
								{
									0.07,
									"0.53 + 0.105"
								},
								1
							};
							down[]=
							{
								
								{
									0.029999999,
									"0.53 + 0.145"
								},
								1
							};
						};
					};
					class ATMissileTOFGroup
					{
						condition="ATmissile";
						type="group";
						class TOFtext
						{
							type="text";
							align="right";
							source="static";
							text="TOF=";
							scale=1;
							pos[]=
							{
								{0.61000001,0.92000002},
								1
							};
							right[]=
							{
								{0.64999998,0.92000002},
								1
							};
							down[]=
							{
								{0.61000001,0.95999998},
								1
							};
						};
						class TOFnumber
						{
							type="text";
							source="targetDist";
							sourcescale=0.0024999999;
							align="right";
							scale=1;
							pos[]=
							{
								{0.69,0.92000002},
								1
							};
							right[]=
							{
								{0.73000002,0.92000002},
								1
							};
							down[]=
							{
								{0.69,0.95999998},
								1
							};
						};
					};
					class LaserTOFGroup
					{
						condition="Bomb";
						type="group";
						class TOFtext
						{
							type="text";
							align="right";
							source="static";
							text="TOF=";
							scale=1;
							pos[]=
							{
								{0.61000001,0.92000002},
								1
							};
							right[]=
							{
								{0.64999998,0.92000002},
								1
							};
							down[]=
							{
								{0.61000001,0.95999998},
								1
							};
						};
						class TOFnumber
						{
							type="text";
							source="targetDist";
							sourcescale=0.0024999999;
							align="right";
							scale=1;
							pos[]=
							{
								{0.69,0.92000002},
								1
							};
							right[]=
							{
								{0.73000002,0.92000002},
								1
							};
							down[]=
							{
								{0.69,0.95999998},
								1
							};
						};
					};
					class RocketTOFGroup
					{
						condition="Rocket";
						type="group";
						class TOFtext
						{
							type="text";
							align="right";
							source="static";
							text="TOF=";
							scale=1;
							pos[]=
							{
								{0.61000001,0.92000002},
								1
							};
							right[]=
							{
								{0.64999998,0.92000002},
								1
							};
							down[]=
							{
								{0.61000001,0.95999998},
								1
							};
						};
						class TOFnumber
						{
							type="text";
							source="targetDist";
							sourcescale=0.0024999999;
							align="right";
							scale=1;
							pos[]=
							{
								{0.69,0.92000002},
								1
							};
							right[]=
							{
								{0.73000002,0.92000002},
								1
							};
							down[]=
							{
								{0.69,0.95999998},
								1
							};
						};
					};
					class RangeNumber
					{
						type="text";
						source="targetDist";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.38999999,0.88999999},
							1
						};
						right[]=
						{
							{0.43000001,0.88999999},
							1
						};
						down[]=
						{
							{0.38999999,0.93000001},
							1
						};
					};
					class RangeText
					{
						type="text";
						source="static";
						text="RNG";
						align="left";
						scale=1;
						pos[]=
						{
							{0.38999999,0.86000001},
							1
						};
						right[]=
						{
							{0.43000001,0.86000001},
							1
						};
						down[]=
						{
							{0.38999999,0.89999998},
							1
						};
					};
					class SpeedNumber
					{
						type="text";
						align="right";
						scale=1;
						source="speed";
						sourceScale=1.94384;
						pos[]=
						{
							{0.029999999,0.47499999},
							1
						};
						right[]=
						{
							{0.079999998,0.47499999},
							1
						};
						down[]=
						{
							{0.029999999,0.52499998},
							1
						};
					};
					class TorqueNumber
					{
						condition="simulRTD";
						class Torque_number
						{
							type="text";
							align="left";
							scale=1;
							source="rtdRotorTorque";
							sourceScale=290;
							pos[]=
							{
								{0.064999998,0.175},
								1
							};
							right[]=
							{
								{0.115,0.175},
								1
							};
							down[]=
							{
								{0.064999998,0.22499999},
								1
							};
						};
						class Torquetext
						{
							type="text";
							source="static";
							text="%";
							align="right";
							scale=1;
							pos[]=
							{
								{0.07,0.175},
								1
							};
							right[]=
							{
								{0.12,0.175},
								1
							};
							down[]=
							{
								{0.07,0.22499999},
								1
							};
						};
					};
					class AltNumber: SpeedNumber
					{
						align="right";
						source="altitudeAGL";
						sourceScale=3.2808399;
						pos[]=
						{
							{0.82999998,0.47499999},
							1
						};
						right[]=
						{
							{0.88,0.47499999},
							1
						};
						down[]=
						{
							{0.82999998,0.52499998},
							1
						};
					};
					class ASLNumber
					{
						type="text";
						source="altitudeASL";
						sourceScale=3.2808399;
						align="right";
						scale=1;
						pos[]=
						{
							{0.83499998,0.18000001},
							1
						};
						right[]=
						{
							{0.875,0.18000001},
							1
						};
						down[]=
						{
							{0.83499998,0.22},
							1
						};
					};
					class VspeedScalePosta
					{
						type="line";
						width=5;
						points[]=
						{
							
							{
								{0.98000002,0.2},
								1
							},
							
							{
								{1,0.2},
								1
							},
							{},
							
							{
								{0.93000001,0.2},
								1
							},
							
							{
								{0.94999999,0.2},
								1
							},
							{},
							
							{
								{0.98000002,0.34999999},
								1
							},
							
							{
								{1,0.34999999},
								1
							},
							{},
							
							{
								{0.93000001,0.34999999},
								1
							},
							
							{
								{0.94999999,0.34999999},
								1
							},
							{},
							
							{
								{0.94,0.38},
								1
							},
							
							{
								{0.94999999,0.38},
								1
							},
							{},
							
							{
								{0.94,0.41},
								1
							},
							
							{
								{0.94999999,0.41},
								1
							},
							{},
							
							{
								{0.94,0.44},
								1
							},
							
							{
								{0.94999999,0.44},
								1
							},
							{},
							
							{
								{0.94,0.47},
								1
							},
							
							{
								{0.94999999,0.47},
								1
							},
							{},
							
							{
								{0.98000002,0.5},
								1
							},
							
							{
								{1,0.5},
								1
							},
							{},
							
							{
								{0.93000001,0.5},
								1
							},
							
							{
								{0.94999999,0.5},
								1
							},
							{},
							
							{
								{0.94,0.52999997},
								1
							},
							
							{
								{0.94999999,0.52999997},
								1
							},
							{},
							
							{
								{0.94,0.56},
								1
							},
							
							{
								{0.94999999,0.56},
								1
							},
							{},
							
							{
								{0.94,0.58999997},
								1
							},
							
							{
								{0.94999999,0.58999997},
								1
							},
							{},
							
							{
								{0.94,0.62},
								1
							},
							
							{
								{0.94999999,0.62},
								1
							},
							{},
							
							{
								{0.98000002,0.64999998},
								1
							},
							
							{
								{1,0.64999998},
								1
							},
							{},
							
							{
								{0.93000001,0.64999998},
								1
							},
							
							{
								{0.94999999,0.64999998},
								1
							},
							{},
							
							{
								{0.99000001,0.68000001},
								1
							},
							
							{
								{0.98000002,0.68000001},
								1
							},
							{},
							
							{
								{0.99000001,0.70999998},
								1
							},
							
							{
								{0.98000002,0.70999998},
								1
							},
							{},
							
							{
								{0.99000001,0.74000001},
								1
							},
							
							{
								{0.98000002,0.74000001},
								1
							},
							{},
							
							{
								{0.99000001,0.76999998},
								1
							},
							
							{
								{0.98000002,0.76999998},
								1
							},
							{},
							
							{
								{0.98000002,0.80000001},
								1
							},
							
							{
								{1,0.80000001},
								1
							},
							{},
							
							{
								{0.93000001,0.80000001},
								1
							},
							
							{
								{0.94999999,0.80000001},
								1
							},
							{}
						};
					};
					class RadarAltitudeBand
					{
						clipTL[]={0,0.2};
						clipBR[]={1,0.80000001};
						hideValue=201;
						class radarbanda
						{
							type="line";
							width=17;
							points[]=
							{
								
								{
									"RadarAltitudeBone",
									{0,0},
									1
								},
								
								{
									"RadarAltitudeBone",
									{0,0.60000002},
									1
								}
							};
						};
					};
					class VspeedBand
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"VspeedBone",
								{-0.0099999998,0},
								1
							},
							
							{
								"VspeedBone",
								{-0.025,-0.015},
								1
							},
							
							{
								"VspeedBone",
								{-0.025,0.015},
								1
							},
							
							{
								"VspeedBone",
								{-0.0099999998,0},
								1
							},
							{}
						};
					};
					class HeadingNumber: SpeedNumber
					{
						source="heading";
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.5,0.045000002},
							1
						};
						right[]=
						{
							{0.56,0.045000002},
							1
						};
						down[]=
						{
							
							{
								0.5,
								"0.045 + 0.06"
							},
							1
						};
					};
					class Center_box
					{
						type="line";
						width=1.5;
						points[]=
						{
							
							{
								
								{
									0.44999999,
									"0.02 + 0.085 - 0.06"
								},
								1
							},
							
							{
								
								{
									"0.45 + 0.10",
									"0.02 + 0.085 - 0.06"
								},
								1
							},
							
							{
								
								{
									"0.45 + 0.10",
									"0.02 + 0.085"
								},
								1
							},
							
							{
								
								{
									0.44999999,
									"0.02 + 0.085"
								},
								1
							},
							
							{
								
								{
									0.44999999,
									"0.02 + 0.085 - 0.06"
								},
								1
							}
						};
					};
					class HeadingArrow
					{
						type="line";
						width=7;
						points[]=
						{
							
							{
								
								{
									"0.5",
									"0.128 + 0.03"
								},
								1
							},
							
							{
								{0.5,0.12800001},
								1
							}
						};
					};
					class HeadingScale_LEFT
					{
						clipTL[]={0,0};
						clipBR[]={0.44999999,1};
						class Heading_group
						{
							type="scale";
							horizontal=1;
							source="heading";
							sourceScale=1;
							width=5;
							top=0.12;
							center=0.5;
							bottom=0.88;
							lineXleft="0.03 + 0.085";
							lineYright="0.02 + 0.085";
							lineXleftMajor="0.04 + 0.085";
							lineYrightMajor="0.02 + 0.085";
							majorLineEach=3;
							numberEach=3;
							step=10;
							stepSize="0.05";
							align="center";
							scale=1;
							pos[]=
							{
								0.12,
								"0.0 + 0.065"
							};
							right[]=
							{
								0.16,
								"0.0 + 0.065"
							};
							down[]=
							{
								0.12,
								"0.04 + 0.065"
							};
						};
					};
					class HeadingScale_RIGHT
					{
						clipTL[]={0.55000001,0};
						clipBR[]={1,1};
						class Heading_group
						{
							type="scale";
							horizontal=1;
							source="heading";
							sourceScale=1;
							width=5;
							top=0.12;
							center=0.5;
							bottom=0.88;
							lineXleft="0.03 + 0.085";
							lineYright="0.02 + 0.085";
							lineXleftMajor="0.04 + 0.085";
							lineYrightMajor="0.02 + 0.085";
							majorLineEach=3;
							numberEach=3;
							step=10;
							stepSize="0.05";
							align="center";
							scale=1;
							pos[]=
							{
								0.12,
								"0.0 + 0.065"
							};
							right[]=
							{
								0.16,
								"0.0 + 0.065"
							};
							down[]=
							{
								0.12,
								"0.04 + 0.065"
							};
						};
					};
					class HeadingScale_BOTTOM
					{
						clipTL[]=
						{
							0.44999999,
							"0.02 + 0.085"
						};
						clipBR[]=
						{
							"0.45 + 0.10",
							1
						};
						class Heading_group
						{
							type="scale";
							horizontal=1;
							source="heading";
							sourceScale=1;
							width=5;
							top=0.12;
							center=0.5;
							bottom=0.88;
							lineXleft="0.03 + 0.085";
							lineYright="0.02 + 0.085";
							lineXleftMajor="0.04 + 0.085";
							lineYrightMajor="0.02 + 0.085";
							majorLineEach=3;
							numberEach=3;
							step=10;
							stepSize="0.05";
							align="center";
							scale=1;
							pos[]=
							{
								0.12,
								"0.0 + 0.065"
							};
							right[]=
							{
								0.16,
								"0.0 + 0.065"
							};
							down[]=
							{
								0.12,
								"0.04 + 0.065"
							};
						};
					};
					class Fuel_Text
					{
						type="text";
						source="static";
						text="Fuel";
						align="right";
						scale=1;
						pos[]=
						{
							{0.029999999,0.89999998},
							1
						};
						right[]=
						{
							{0.07,0.89999998},
							1
						};
						down[]=
						{
							{0.029999999,0.94},
							1
						};
					};
					class Fuel_Number
					{
						type="text";
						source="fuel";
						sourceScale=100;
						align="right";
						scale=1;
						pos[]=
						{
							{0.1,0.89999998},
							1
						};
						right[]=
						{
							{0.14,0.89999998},
							1
						};
						down[]=
						{
							{0.1,0.94},
							1
						};
					};
				};
				helmetMountedDisplay=1;
				helmetPosition[]={-0.039999999,0.039999999,0.1};
				helmetRight[]={0.079999998,0,0};
				helmetDown[]={0,-0.079999998,0};
			};
			class Kimi_HUD_2
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15000001,1,0.15000001,1};
				enableParallax=0;
				class Bones
				{
					class Velocity
					{
						type="vector";
						source="velocity";
						pos0[]={0.5,0.5};
						pos10[]={0.75,0.75};
					};
					class ForwardVec1
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.25,0.25};
					};
					class ForwardVec
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.25299999,0.25299999};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.5,0.5};
						pos10[]={0.75300002,0.75300002};
					};
					class WeaponAim1
					{
						type="vector";
						source="weapon";
						pos0[]={0,0};
						pos10[]={0.25299999,0.23};
					};
					class Target
					{
						type="vector";
						source="target";
						pos0[]={0.5,0.5};
						pos10[]={0.75300002,0.75300002};
					};
					class RadarContact
					{
						type="fixed";
						pos[]={0,0};
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class LimitWaypoint
					{
						type="limit";
						limits[]={0.2,0.1,0.80000001,0.1};
					};
					class WPPoint
					{
						type="vector";
						source="WPPoint";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class WPPointToView: WPPoint
					{
						source="WPPointToView";
					};
				};
				class Draw
				{
					color[]={0.18000001,1,0.18000001};
					alpha=1;
					condition="on";
					class PlaneMovementCrosshair
					{
						type="line";
						width=7;
						points[]=
						{
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0,-0.02},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.0099999998,-0.01732},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.01732,-0.0099999998},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.02,0},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.01732,0.0099999998},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.0099999998,0.01732},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0,0.02},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.0099999998,0.01732},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.01732,0.0099999998},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.02,0},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.01732,-0.0099999998},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.0099999998,-0.01732},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0,-0.02},
								1
							},
							{},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.039999999,0},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0.02,0},
								1
							},
							{},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.039999999,0},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{-0.02,0},
								1
							},
							{},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0,-0.039999999},
								1
							},
							
							{
								"ForwardVec1",
								1,
								"Velocity",
								1,
								{0,-0.02},
								1
							}
						};
					};
					class Gunner_AIM
					{
						type="group";
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0,-0.015},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0,-0.029999999},
									1
								},
								{},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0,-0.032499999},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0,-0.047499999},
									1
								},
								{},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0,0.015},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0,0.029999999},
									1
								},
								{},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0,0.032499999},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0,0.047499999},
									1
								},
								{},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{-0.015,0},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{-0.029999999,0},
									1
								},
								{},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{-0.032499999,0},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{-0.047499999,0},
									1
								},
								{},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0.015,0},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0.029999999,0},
									1
								},
								{},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0.032499999,0},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0.047499999,0},
									1
								}
							};
						};
					};
					class GunCross
					{
						condition="mgun";
						class Circle
						{
							type="line";
							width=9;
							points[]=
							{
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0,-0.050000001},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0,-0.015},
									1
								},
								{},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0,0.015},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0,0.050000001},
									1
								},
								{},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{-0.050000001,0},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{-0.015,0},
									1
								},
								{},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0.015,0},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0.050000001,0},
									1
								},
								{}
							};
						};
					};
					class RocketCross
					{
						condition="rocket";
						width=6;
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{-0.050000001,-0.079999998},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0.050000001,-0.079999998},
									1
								},
								{},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0,-0.079999998},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0,0.079999998},
									1
								},
								{},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{-0.050000001,0.079999998},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0.050000001,0.079999998},
									1
								},
								{}
							};
						};
					};
					class AT_Aim
					{
						condition="ATmissile";
						width=2;
						class Circle
						{
							type="line";
							width=2;
							points[]=
							{
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{-0.1,-0.1},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0.1,-0.1},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{0.1,0.1},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{-0.1,0.1},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									{-0.1,-0.1},
									1
								}
							};
						};
					};
					class AA_aim
					{
						condition="AAmissile";
						class Circle
						{
							type="line";
							width=2.5;
							points[]=
							{
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0 / 4",
										"-0.248559 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.0434 / 4",
										"-0.244781 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.0855 / 4",
										"-0.233571 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.125 / 4",
										"-0.215252 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.1607 / 4",
										"-0.190396 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.1915 / 4",
										"-0.159774 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.2165 / 4",
										"-0.12428 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.234925 / 4",
										"-0.0850072 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.2462 / 4",
										"-0.0431499 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.25 / 4",
										"0 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.2462 / 4",
										"0.0431499 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.234925 / 4",
										"0.0850072 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.2165 / 4",
										"0.12428 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.1915 / 4",
										"0.159774 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.1607 / 4",
										"0.190396 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.125 / 4",
										"0.215252 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.0855 / 4",
										"0.233571 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.0434 / 4",
										"0.244781 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0 / 4",
										"0.248559 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.0434 / 4",
										"0.244781 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.0855 / 4",
										"0.233571 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.125 / 4",
										"0.215252 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.1607 / 4",
										"0.190396 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.1915 / 4",
										"0.159774 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.2165 / 4",
										"0.12428 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.234925 / 4",
										"0.0850072 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.2462 / 4",
										"0.0431499 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.25 / 4",
										"0 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.2462 / 4",
										"-0.0431499 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.234925 / 4",
										"-0.0850072 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.2165 / 4",
										"-0.12428 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.1915 / 4",
										"-0.159774 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.1607 / 4",
										"-0.190396 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.125 / 4",
										"-0.215252 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.0855 / 4",
										"-0.233571 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.0434 / 4",
										"-0.244781 / 4"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0 / 4",
										"-0.248559 / 4"
									},
									1
								},
								{},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0 / 2",
										"-0.248559 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.0434 / 2",
										"-0.244781 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.0855 / 2",
										"-0.233571 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.125 / 2",
										"-0.215252 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.1607 / 2",
										"-0.190396 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.1915 / 2",
										"-0.159774 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.2165 / 2",
										"-0.12428 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.234925 / 2",
										"-0.0850072 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.2462 / 2",
										"-0.0431499 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.25 / 2",
										"0 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.2462 / 2",
										"0.0431499 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.234925 / 2",
										"0.0850072 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.2165 / 2",
										"0.12428 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.1915 / 2",
										"0.159774 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.1607 / 2",
										"0.190396 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.125 / 2",
										"0.215252 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.0855 / 2",
										"0.233571 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0.0434 / 2",
										"0.244781 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0 / 2",
										"0.248559 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.0434 / 2",
										"0.244781 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.0855 / 2",
										"0.233571 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.125 / 2",
										"0.215252 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.1607 / 2",
										"0.190396 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.1915 / 2",
										"0.159774 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.2165 / 2",
										"0.12428 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.234925 / 2",
										"0.0850072 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.2462 / 2",
										"0.0431499 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.25 / 2",
										"0 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.2462 / 2",
										"-0.0431499 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.234925 / 2",
										"-0.0850072 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.2165 / 2",
										"-0.12428 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.1915 / 2",
										"-0.159774 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.1607 / 2",
										"-0.190396 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.125 / 2",
										"-0.215252 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.0855 / 2",
										"-0.233571 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"-0.0434 / 2",
										"-0.244781 / 2"
									},
									1
								},
								
								{
									"ForwardVec",
									1,
									"WeaponAim",
									1,
									
									{
										"0 / 2",
										"-0.248559 / 2"
									},
									1
								}
							};
						};
					};
					class WP
					{
						condition="wpvalid - autohover";
						class WPdist
						{
							type="text";
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.235,0.77403802},
								1
							};
							right[]=
							{
								{0.27500001,0.77403802},
								1
							};
							down[]=
							{
								{0.235,0.80155998},
								1
							};
						};
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							sourceLength=2;
							align="right";
							scale=1;
							pos[]=
							{
								{0.096000001,0.77600402},
								1
							};
							right[]=
							{
								{0.126,0.77600402},
								1
							};
							down[]=
							{
								{0.096000001,0.79959399},
								1
							};
						};
						class WPstatic
						{
							type="text";
							source="static";
							text="W";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								{0.075000003,0.77499998},
								1
							};
							right[]=
							{
								{0.105,0.77499998},
								1
							};
							down[]=
							{
								{0.075000003,0.80000001},
								1
							};
						};
						class WPAuto
						{
							type="text";
							source="static";
							text="A";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								
								{
									"0.075 +0.035",
									0.80000001
								},
								1
							};
							right[]=
							{
								{0.14,0.80000001},
								1
							};
							down[]=
							{
								
								{
									"0.075 +0.035",
									0.82499999
								},
								1
							};
						};
						class WPKM
						{
							type="text";
							source="static";
							text="KM";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								
								{
									"0.075 +0.16",
									0.77499998
								},
								1
							};
							right[]=
							{
								{0.26499999,0.77499998},
								1
							};
							down[]=
							{
								
								{
									"0.075 +0.16",
									0.80299997
								},
								1
							};
						};
						class WPTime
						{
							type="text";
							source="static";
							text="-:--";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								
								{
									"0.075 +0.11",
									0.80000001
								},
								1
							};
							right[]=
							{
								{0.215,0.80000001},
								1
							};
							down[]=
							{
								
								{
									"0.075 +0.11",
									0.82499999
								},
								1
							};
						};
						class WP
						{
							width=2;
							type="line";
							points[]=
							{
								
								{
									"WPPoint",
									1,
									"LimitWaypoint",
									1,
									{-0.02,0.039999999},
									1
								},
								
								{
									"WPPoint",
									1,
									"LimitWaypoint",
									1,
									{0,0.02},
									1
								},
								
								{
									"WPPoint",
									1,
									"LimitWaypoint",
									1,
									{0.02,0.039999999},
									1
								},
								{}
							};
						};
					};
					class TargetACQ
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.059999999},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.055},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.050000001},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.045000002},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.039999999},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.035},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.029999999},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.025},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.02},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.015},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.0099999998},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,-0.0049999999},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.059999999},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.055},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.050000001},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.045000002},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.039999999},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.035},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.029999999},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.025},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.02},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.015},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.0099999998},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0,0.0049999999},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.059999999,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.055,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.050000001,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.045000002,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.039999999,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.035,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.029999999,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.025,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.02,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.015,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.0099999998,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{-0.0049999999,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.059999999,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.055,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.050000001,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.045000002,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.039999999,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.035,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.029999999,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.025,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.02,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.015,0},
								1
							},
							{},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.0099999998,0},
								1
							},
							
							{
								"ForwardVec",
								1,
								"target",
								{0.0049999999,0},
								1
							},
							{}
						};
					};
				};
				helmetMountedDisplay=1;
				helmetPosition[]={-0.035,0.035,0.1};
				helmetRight[]={0.07,0,0};
				helmetDown[]={0,-0.07,0};
			}
	};
