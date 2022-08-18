//#include <graphics.h>
//#include <conio.h>
//IMAGE logo_img;
//
////#pragma comment (lib,"Winmm lib")
//
//#define ENEMY_NUM 10//设置敌方坦克数量
//int map[26][26] = {//地图数组 可消除墙为1，不可消除墙为 2，老鹰为3 
//{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
//{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
//{ 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
//{ 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
//{ 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
//{ 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
//{ 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 2, 2, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
//{ 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 2, 2, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
//{ 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
//{ 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
//{ 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
//{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
//{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
//{ 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1 },
//{ 2, 2, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 2, 2 },
//{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
//{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
//{ 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
//{ 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
//{ 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
//{ 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
//{ 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
//{ 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
//{ 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0 },
//{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 3, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
//{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 3, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
//};
//void menu();
//void init_map_2(int* map, int rows, int cols);
//void play();
////int tank_walk(tank_s* tank, DIRECTION direction, IMAGE* img);
//void set_prop_map(int x, int y, int val);//打印坦克位置
////void enemy_tank_walk(tank_s* tank, DIRECTION direction, IMAGE* img);
//
//
//enum DIRECTION {//枚举类型
//	UP,
//	DOWN,
//	LEFT,
//	RIGHT
//};
//
//
////坦克结构体
//struct tank_s {
//	int x;  //坦克在地图数组中所在列
//	int y;  //坦克在地图数组中所在的行
//	DIRECTION direction;  //坦克的方向，上、下、左、右
//	int live;       //是否生存 1-活着  0-挂了
//};
//
////子弹结构体
//struct bullet_s {
//	int pos_x;   //子弹在“戏台”上的横坐标
//	int pos_y;   //子弹在“戏台”上的纵坐标
//	DIRECTION  direction; //子弹方向
//	int status;  //子弹是否存在
//};
//
////设置坦克位置
//void set_prop_map(int x, int y, int val) {
//	map[y][x] = val;
//	map[y][x + 1] = val;
//	map[y + 1][x] = val;
//	map[y + 1][x + 1] = val;
//}
//
//
//
///*********************************
// *控制坦克按相应的方向前进一步
// *返回值：失败 - 0   成功 -1
// *********************************/
//int tank_walk(tank_s* tank, DIRECTION direction, IMAGE* img, int step) {//step用于指示是否改变位置，1为改变
//	int new_x = tank->x;
//	int new_y = tank->y;
//
//	if (step == 1) {
//		if (direction == UP) {
//			new_y -= 1;
//		}
//		else if (direction == DOWN) {
//			new_y += 1;
//		}
//		else if (direction == LEFT) {
//			new_x -= 1;
//		}
//		else if (direction == RIGHT) {
//			new_x += 1;
//		}
//		else {
//			return 0; //无效的方向
//		}
//		set_prop_map(tank->x, tank->y, 0);
//	}
//
//
//	setfillcolor(BLACK);
//	solidrectangle(tank->x * 25, tank->y * 25, tank->x * 25 + 50, tank->y * 25 + 50);
//	if (step) {
//		set_prop_map(new_x, new_y, 200);
//
//		tank->x = new_x;
//		tank->y = new_y;
//	}
//	putimage(tank->x * 25, tank->y * 25, img);
//	return 1;
//}
//
////敌方坦克移动
//void enemy_tank_walk(tank_s* tank, DIRECTION direction, IMAGE* img) {
//	switch (direction) {
//	case LEFT:  //左
//		if (tank->direction == LEFT && (tank->x - 1) >= 0 && map[tank->y][tank->x - 1] == 0 && map[tank->y + 1][tank->x - 1] == 0) {//左边是空地
//			tank_walk(tank, LEFT, img, 1);
//		}
//		else if (direction != LEFT) {
//			tank->direction = LEFT;
//			tank_walk(tank, LEFT, img, 0);
//		}
//		break;
//	case UP:  //上
//		if (tank->direction == UP && (tank->y - 1) >= 0 && map[tank->y - 1][tank->x] == 0 && map[tank->y - 1][tank->x + 1] == 0) {//上边是空地
//			tank_walk(tank, UP, img, 1);
//		}
//		else if (tank->direction != UP) {
//			tank->direction = UP;
//			tank_walk(tank, UP, img, 0);
//		}
//		break;
//	case DOWN:  //下
//		if (tank->direction == DOWN && (tank->y + 2) <= 25 && map[tank->y + 2][tank->x] == 0 && map[tank->y + 2][tank->x + 1] == 0) {//下边是空地
//			tank_walk(tank, DOWN, img, 1);
//		}
//		else if (tank->direction != DOWN) {
//			tank->direction = DOWN;
//			tank_walk(tank, DOWN, img, 0);
//		}
//		break;
//	case RIGHT:  //右
//		if (tank->direction == RIGHT && (tank->x + 2) <= 25 && map[tank->y][tank->x + 2] == 0 && map[tank->y + 1][tank->x + 2] == 0) {//右边是空地
//			tank_walk(tank, RIGHT, img, 1);
//		}
//		else if (tank->direction != RIGHT) {
//			tank->direction = RIGHT;
//			tank_walk(tank, RIGHT, img, 0);
//		}
//		break;
//	}
//}
//
//
//
///*****************************
// *实现游戏场景
//******************************/
//void play() {
//
//	tank_s my_tank;
//	bullet_s my_bullet;
//	tank_s enemy_tank[ENEMY_NUM]; //敌方坦克
//	bullet_s enemy_bullet[ENEMY_NUM];//敌方坦克发射的子弹
//	IMAGE my_tank_img[4];
//	IMAGE enemy_tank_img[4];
//	int key;
//	int times=1;//记录当前程序循环的休眠次数，每次20ms
//	int enemy_total = 0;//当前敌方坦克数量
//
//
//
//
//	//加载我方坦克的图片
//	loadimage(&my_tank_img[UP], "res/tank_up.jpg", 50, 50);
//	loadimage(&my_tank_img[DOWN], "res/tank_down.jpg", 50, 50);
//	loadimage(&my_tank_img[LEFT], "res/tank_left.jpg", 50, 50);
//	loadimage(&my_tank_img[RIGHT], "res/tank_right.jpg", 50, 50);
//	//加载敌方坦克的图片
//	loadimage(&enemy_tank_img[UP], "res/enemy_tank_up.jpg", 50, 50);
//	loadimage(&enemy_tank_img[DOWN], "res/enemy_tank_down.jpg", 50, 50);
//	loadimage(&enemy_tank_img[LEFT], "res/enemy_tank_left.jpg", 50, 50);
//	loadimage(&enemy_tank_img[RIGHT], "res/enemy_tank_right.jpg", 50, 50);
//
//
//	//子弹初始化
//	my_bullet.status = 0;//不存在
//
//
//
//
//	//设定我方坦克的出场的位置
//	my_tank.x = 8;
//	my_tank.y = 24;
//	my_tank.live = 1;
//	my_tank.direction = UP;
//	set_prop_map(my_tank.x, my_tank.y, 200);//出身位置
//	//设定敌方坦克的出场位置
//	for (int i = 0; i < ENEMY_NUM; i++) {
//		if (i % 3 == 0) {
//			enemy_tank[i].x = 0;
//		}
//		else if (i % 3 == 1) {
//			enemy_tank[i].x = 12;
//		}
//		else if (i % 3 == 2) {
//			enemy_tank[i].x = 24;
//		}
//		enemy_tank[i].direction = DOWN;
//		enemy_tank[i].y = 0;
//		enemy_tank[i].live = 1;
//		set_prop_map(enemy_tank[i].x, enemy_tank[i].y, 100 + i);
//		enemy_bullet[i].status = 0;
//
//	}
//	tank_walk(&enemy_tank[0], DOWN, &enemy_tank_img[DOWN], 0);
//	tank_walk(&enemy_tank[1], DOWN, &enemy_tank_img[DOWN], 0);
//	tank_walk(&enemy_tank[2], DOWN, &enemy_tank_img[DOWN], 0);
//	enemy_total = 3;
//
//
//
//	putimage(my_tank.x * 25, my_tank.y * 25, &my_tank_img[my_tank.direction]);
//
//	while (1) {
//		// 敌方坦克行动
//		if (times % 50 == 0) {
//			for (int i = 0; i < enemy_total; i++) {
//				Sleep(50);
//				if (enemy_tank[i].live) {
//					enemy_tank_walk(&enemy_tank[i], enemy_tank[i].direction, &enemy_tank_img[enemy_tank[i].direction]);
//				}
//			}
//		}
//
//
//		if (_kbhit()) {
//			key = _getch();
//
//			switch (key) {
//			case 'a':  //左
//				if (my_tank.direction == LEFT && (my_tank.x - 1) >= 0 && map[my_tank.y][my_tank.x - 1] == 0 && map[my_tank.y + 1][my_tank.x - 1] == 0) {//左边是空地
//					tank_walk(&my_tank, LEFT, &my_tank_img[my_tank.direction], 1);
//				}
//				else if (my_tank.direction != LEFT) {
//					my_tank.direction = LEFT;
//					tank_walk(&my_tank, LEFT, &my_tank_img[my_tank.direction], 0);
//				}
//				break;
//			case 'w':  //上
//				if (my_tank.direction == UP && (my_tank.y - 1) >= 0 && map[my_tank.y - 1][my_tank.x] == 0 && map[my_tank.y - 1][my_tank.x + 1] == 0) {//上边是空地
//					tank_walk(&my_tank, UP, &my_tank_img[my_tank.direction], 1);
//				}
//				else if (my_tank.direction != UP) {
//					my_tank.direction = UP;
//					tank_walk(&my_tank, UP, &my_tank_img[my_tank.direction], 0);
//				}
//				break;
//			case 's':  //下
//				if (my_tank.direction == DOWN && (my_tank.y + 2) <= 25 && map[my_tank.y + 2][my_tank.x] == 0 && map[my_tank.y + 2][my_tank.x + 1] == 0) {//下边是空地
//					tank_walk(&my_tank, DOWN, &my_tank_img[my_tank.direction], 1);
//				}
//				else if (my_tank.direction != DOWN) {
//					my_tank.direction = DOWN;
//					tank_walk(&my_tank, DOWN, &my_tank_img[my_tank.direction], 0);
//				}
//				break;
//			case 'd':  //右
//				if (my_tank.direction == RIGHT && (my_tank.x + 2) <= 25 && map[my_tank.y][my_tank.x + 2] == 0 && map[my_tank.y + 1][my_tank.x + 2] == 0) {//右边是空地
//					tank_walk(&my_tank, RIGHT, &my_tank_img[my_tank.direction], 1);
//				}
//				else if (my_tank.direction != RIGHT) {
//					my_tank.direction = RIGHT;
//					tank_walk(&my_tank, RIGHT, &my_tank_img[my_tank.direction], 0);
//				}
//				break;
//			case 'j':  //开火
//				if (my_bullet.status == 0) {
//
//					if (my_tank.direction == UP) {
//						my_bullet.pos_x = my_tank.x * 25 + 23;
//						my_bullet.pos_y = my_tank.y * 25 - 3;
//					}
//					else if (my_tank.direction == LEFT) {
//						my_bullet.pos_x = my_tank.x * 25 - 3;
//						my_bullet.pos_y = my_tank.y * 25 + 23;
//					}
//					else if (my_tank.direction == DOWN) {
//						my_bullet.pos_x = my_tank.x * 25 + 23;
//						my_bullet.pos_y = my_tank.y * 25 + 50;
//					}
//					else if (my_tank.direction == RIGHT) {
//						my_bullet.pos_x = my_tank.x * 25 + 50;
//						my_bullet.pos_y = my_tank.y * 25 + 23;
//					}
//
//					my_bullet.direction = my_tank.direction;
//					my_bullet.status = 1;
//				}
//
//				break;
//			case 'p':  //暂停
//				system("pause");
//				break;
//			default:   //其他键盘输入无须处理
//				break;
//			}
//		}
//
//
//
//		Sleep(10);//休眠10ms，防止过热
//		times += times;
//	}
//}
//
//
//
//
//
//
////逼格更高、兼容性更好的初始化地图函数
//void init_map_2(int* map, int rows, int cols) {
//	int i, j;
//	IMAGE img_home, img_wall_1, img_wall_2;
//
//	loadimage(&img_home, "res/home.jpg", 50, 50);// 老鹰
//	loadimage(&img_wall_1, "res/wall1.jpg", 25, 25);//不可消除的墙
//	loadimage(&img_wall_2, "res/wall2.jpg", 25, 25);//可消除的墙
//
//	for (i = 0; i < rows; i++) {
//		for (j = 0; j < cols; j++) {
//			if (*(map + cols * i + j) == 1) {
//				putimage(25 * j, 25 * i, &img_wall_2);
//			}
//			else if (*(map + cols * i + j) == 2) {
//				putimage(25 * j, 25 * i, &img_wall_1);
//			}
//			else if (*(map + cols * i + j) == 3) {//防止多重打印老鹰
//				putimage(25 * j, 25 * i, &img_home);
//				*(map + cols * i + j) = 4;
//				*(map + cols * i + (j + 1)) = 4;
//				*(map + cols * (i + 1) + j) = 4;
//				*(map + cols * (i + 1) + (j + 1)) = 4;
//			}
//		}
//	}
//}
//
//
//
////菜单
//void menu() {
//	//显示 logo
//	IMAGE logo_img;
//	loadimage(&logo_img, "res/logo.bmp", 433, 147);
//	putimage(110, 20, &logo_img);
//
//	//实现导航按钮
//	setlinecolor(WHITE);//外框
//	setfillcolor(BLACK);//内部填充
//	fillrectangle(230, 200, 310, 240);//绘制矩形
//	settextstyle(25, 0, _T("宋体"));
//	outtextxy(240, 210, _T("说 明"));
//	fillrectangle(350, 200, 430, 240);
//	outtextxy(360, 210, _T("开 始"));
//
//	MOUSEMSG mouse;//鼠标信息变量
//	IMAGE illustrate_img;
//	loadimage(&illustrate_img, "res/illustrate.jpg", 300, 300);//说明图
//
//	while (true) {
//		mouse = GetMouseMsg();
//
//		switch (mouse.uMsg) {//判断鼠标鼠标状态
//		case WM_MOUSEMOVE://系统消息,鼠标移动
//			if ((mouse.x > 230 && mouse.x < 310) && (mouse.y > 200 && mouse.y < 240)) {
//				putimage(150, 250, &illustrate_img);
//			}
//			else {//鼠标离开，将图片覆盖
//				solidrectangle(150, 250, 450, 550);
//			}
//			break;
//		case WM_LBUTTONDOWN://系统信息,鼠标点击
//			if ((mouse.x > 350 && mouse.x < 430) && (mouse.y > 200 && mouse.y < 240)) {
//				cleardevice();//清屏处理
//				return;
//			}
//		}
//	}
//}
//
//
//
//
//
//void main()
//{
//
//	initgraph(650, 650);
//
//	//开始场景，显示菜单
//	menu();
//
//	//初始化地图
//	init_map_2(&map[0][0], 26, 26);
//	play();
//	system("pause");
//
//}


#include <graphics.h>         //引用easyX图形库
#include <Windows.h> 
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <MMSystem.h>
#pragma comment(lib,"winmm.lib")           //导入声音库

#define ENENMY_TANK_NUMBER 10
bool flag = 1;
enum DIRECTION { UP, DOWN, LEFT, RIGHT };        //坦克的方向
	  //坦克结构体

struct TANK
{
	int tank_x;
	int tank_y;
	int direction;          //判断坦克方向，从而确定子弹的飞行轨迹    1 为上 ，2为下 ， 3为左， 4为右
	bool state;
};
//子弹结构体
struct BULLET
{
	int bullet_x;
	int bullet_y;
	DIRECTION direction;
	bool state;
};
//0 为空 1为可消除墙  2为不可消除墙  3，4为基地 敌方十辆坦克 100~109 我方坦克赋值为200
int map[26][26] = {
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0 },
	{ 0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0 },
	{ 0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0 },
	{ 0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0 },
	{ 0,0,1,1,0,0,1,1,0,0,1,1,2,2,1,1,0,0,1,1,0,0,1,1,0,0 },
	{ 0,0,1,1,0,0,1,1,0,0,1,1,2,2,1,1,0,0,1,1,0,0,1,1,0,0 },
	{ 0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0 },
	{ 0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0 },
	{ 0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0 },
	{ 1,1,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,1,1 },
	{ 2,2,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,2,2 },
	{ 0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,1,1,0,0,1,1,0,0,1,1,1,1,1,1,0,0,1,1,0,0,1,1,0,0 },
	{ 0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0 },
	{ 0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0 },
	{ 0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1,0,0 },
	{ 0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0 },
	{ 0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0 },
	{ 0,0,1,1,0,0,1,1,0,0,0,1,1,1,1,0,0,0,1,1,0,0,1,1,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0,0,1,3,4,1,0,0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0,0,1,4,4,1,0,0,0,0,0,0,0,0,0,0,0 }
};

//*******************  游戏首界面   **********************
void outputPage1()
{
	IMAGE logoImg;
	loadimage(&logoImg, _T("res/logo.bmp"), 433, 147);
	putimage(113, 40, &logoImg);

	IMAGE illustrate;
	loadimage(&illustrate, _T("res/illustrate.jpg"), 300, 300);
	settextcolor(RGB(255, 255, 255));
	settextstyle(30, 0, _T("微软雅黑"));
	rectangle(195, 200, 275, 240);
	rectangle(375, 200, 455, 240);
	outtextxy(210, 205, _T("说 明"));
	outtextxy(390, 205, _T("开 始"));

	//****************  检测鼠标事件  *********************
	MOUSEMSG m;
	while (1)
	{
		m = GetMouseMsg();
		switch (m.uMsg)
		{
		case WM_MOUSEMOVE:
			if ((m.x >= 195 && m.x <= 275) && (m.y >= 200 && m.y <= 240))
			{
				putimage(150, 250, &illustrate);
			}
			else
			{
				setfillcolor(BLACK);
				solidrectangle(150, 250, 450, 550);
			}
			break;

		case WM_LBUTTONDOWN://系统信息,鼠标点击
			if ((m.x >= 375 && m.x <= 455) && (m.y >= 200 && m.y <= 240))
			{
				cleardevice();//清屏
				return;
			}
			break;

		}

	}

}

//***************** 游戏初始化界面 ****************
void outputPage2()
{
	IMAGE brick1;
	IMAGE brick2;
	IMAGE home;
	loadimage(&home, _T("res/home.jpg"), 50, 50);
	loadimage(&brick1, _T("res/wall1.jpg"), 25, 25);
	loadimage(&brick2, _T("res/wall2.jpg"), 25, 25);
	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			switch (map[i][j])
			{
			case 1:putimage(25 * j, 25 * i, &brick1); break;
			case 2:putimage(25 * j, 25 * i, &brick2); break;
			case 3:
				putimage(25 * j, 25 * i, &home);
				map[i][j] = 4;
				break;
			}
		}
	}
	return;
}
//********** 修改地图数组参数函数 ************
//用于修改二维数组
void map_par(TANK* tank, int n)
{
	map[tank->tank_y][tank->tank_x] = n;
	map[tank->tank_y + 1][tank->tank_x] = n;
	map[tank->tank_y][tank->tank_x + 1] = n;
	map[tank->tank_y + 1][tank->tank_x + 1] = n;
}
//***************  坦克移动  *****************
int tankMove(TANK* tank, DIRECTION direction, IMAGE* img, int n)
{
	map_par(tank, 0);
	setfillcolor(BLACK);
	solidrectangle(tank->tank_x * 25, tank->tank_y * 25, tank->tank_x * 25 + 50, tank->tank_y * 25 + 50);  //覆盖坦克原来位置
	if (direction == UP)
	{
		tank->tank_y--;
	}
	else if (direction == DOWN)
	{
		tank->tank_y++;
	}
	else if (direction == LEFT)
	{
		tank->tank_x--;
	}
	else if (direction == RIGHT)
	{
		tank->tank_x++;
	}
	else
	{
		return 0;
	}
	map_par(tank, n);
	putimage(tank->tank_x * 25, tank->tank_y * 25, img);              //输出坦克移动后位置

}

// *****************************   使敌方坦克朝着目标的方向前进 *********************
//采用生成随机数,取其余数,再根据目标xy位置进行移动
//可以改进.使用搜索算法
DIRECTION enemyMove(TANK* Etank, int x, int y)
{
	int r = rand() % 100;
	if (y < Etank->tank_y)
	{
		if (x < Etank->tank_x)
		{
			if (r < 50)
				return UP;
			else
				return LEFT;
		}
		else if (x > Etank->tank_x)
		{
			if (r < 50)
				return UP;
			else
				return RIGHT;
		}
		else if (x == Etank->tank_x)
		{
			if (map[Etank->tank_y - 1][Etank->tank_x] == 2)
			{
				if (r < 50)
					return LEFT;
				else
					return RIGHT;
			}
			return UP;
		}
	}
	else if (y > Etank->tank_y)
	{
		if (x < Etank->tank_x)
		{
			if (r < 50)
				return DOWN;
			else
				return LEFT;
		}
		else if (x > Etank->tank_x)
		{
			if (r < 50)
				return DOWN;
			else
				return RIGHT;
		}
		else if (x == Etank->tank_x)
		{
			if (map[Etank->tank_y + 2][Etank->tank_x] == 2)
			{
				if (r < 50)
					return LEFT;
				else
					return RIGHT;
			}
			return DOWN;
		}
	}
	else if (y == Etank->tank_y)
	{
		if (x < Etank->tank_x)
			return LEFT;
		else
			return RIGHT;
	}
}

//**********************  游戏结束 ********************
void putGameOver()
{
	IMAGE gameOver;
	loadimage(&gameOver, _T("res/gameover.jpg"), 600, 400);
	for (int i = 0; i < 130; i++)
	{
		cleardevice();
		putimage(25, i, &gameOver);
		Sleep(15);
	}
	system("pause");

}
void victory()
{
	cleardevice();
	settextcolor(RED);
	settextstyle(300, 70, _T("微软雅黑"));
	outtextxy(80, 150, _T("Victory"));
}
void tankFire(TANK* tank, BULLET* bullet, bool need)
{
	if (bullet->state == 0)          //坦克状态为0（即子弹已不存在）方可再次射击
	{
		if (need)
		{
			PlaySound(_T("res/boom.wav"), NULL, SND_FILENAME | SND_ASYNC);
		}
		switch (tank->direction)
		{
		case UP:
			bullet->bullet_x = tank->tank_x * 25 + 25;
			bullet->bullet_y = tank->tank_y * 25 - 3;
			break;
		case DOWN:
			bullet->bullet_x = tank->tank_x * 25 + 25;
			bullet->bullet_y = tank->tank_y * 25 + 53;
			break;
		case LEFT:
			bullet->bullet_x = tank->tank_x * 25 - 3;
			bullet->bullet_y = tank->tank_y * 25 + 25;
			break;
		case RIGHT:
			bullet->bullet_x = tank->tank_x * 25 + 53;
			bullet->bullet_y = tank->tank_y * 25 + 25;
			break;

		}
		bullet->state = 1;
		bullet->direction = DIRECTION(tank->direction);
	}
}
void putTankBoom(int x, int y)
{
	IMAGE img[8];
	/* char name[32];
	   for (int i = 0; i < 8; i++)
	   {
		   sprintf_s(name, 32, "blast%d.gif", i + i);
		   loadimage(&img[i], name, 50, 50);
	   }     */
	loadimage(&img[0], _T("res/blast1.gif"), 50, 50);
	loadimage(&img[1], _T("res/blast2.gif"), 50, 50);
	loadimage(&img[2], _T("res/blast3.gif"), 50, 50);
	loadimage(&img[3], _T("res/blast4.gif"), 50, 50);
	loadimage(&img[4], _T("res/blast5.gif"), 50, 50);
	loadimage(&img[5], _T("res/blast6.gif"), 50, 50);
	loadimage(&img[6], _T("res/blast7.gif"), 50, 50);
	loadimage(&img[7], _T("res/blast8.gif"), 50, 50);
	for (int i = 0; i < 8; i++)
	{
		putimage(x * 25, y * 25, &img[i]);
		Sleep(10);
	}
}
//  ***************************  对子弹进行碰撞检测  **************************
//检测子弹在飞行中的位置，如果子弹碰到可消除的墙，则将此位置的数组赋值为0，
//同时让墙消失，如果碰到不可消除的墙则子弹消失，
//如果我方子弹碰到敌方坦克，则让子弹和敌方坦克都消失，如果打到老鹰游戏失败。
void  bulletMove(BULLET* bullet, bool& flag, int tell, TANK* tank, int& enemyAlive)
{
	IMAGE Wall2;
	loadimage(&Wall2, _T("res/wall2.jpg"), 25, 25);
	setfillcolor(BLACK);
	solidcircle(bullet->bullet_x, bullet->bullet_y, 2);
	int x1, y1, x2, y2;
	x1 = bullet->bullet_x / 25;
	y1 = bullet->bullet_y / 25;
	switch (bullet->direction)              //判断子弹方向
	{
	case UP:
		bullet->bullet_y -= 3;
		x2 = x1 - 1;
		y2 = y1;
		break;
	case DOWN:
		bullet->bullet_y += 3;
		x2 = x1 - 1;
		y2 = y1;
		break;
	case LEFT:
		bullet->bullet_x -= 3;
		x2 = x1;
		y2 = y1 - 1;
		break;
	case RIGHT:
		bullet->bullet_x += 3;
		x2 = x1;
		y2 = y1 - 1;
		break;
	}

	if (bullet->bullet_x < 0 || bullet->bullet_x>650 || bullet->bullet_y < 0 || bullet->bullet_y>650)
	{
		bullet->state = 0;
		return;
	}
	//***************  子弹碰到可消除墙，消除墙，同时让子弹的状态变为 0  
	if (map[y1][x1] == 1 && map[y2][x2] == 1)
	{
		setfillcolor(BLACK);
		solidrectangle(x1 * 25, y1 * 25, x1 * 25 + 25, y1 * 25 + 25);
		solidrectangle(x2 * 25, y2 * 25, x2 * 25 + 25, y2 * 25 + 25);
		map[y1][x1] = 0;
		map[y2][x2] = 0;
		bullet->state = 0;
		return;
	}
	else if (map[y1][x1] == 1 && map[y2][x2] == 0)
	{
		setfillcolor(BLACK);
		solidrectangle(x1 * 25, y1 * 25, x1 * 25 + 25, y1 * 25 + 25);
		map[y1][x1] = 0;
		bullet->state = 0;
		return;
	}
	else if (map[y1][x1] == 0 && map[y2][x2] == 1)
	{
		setfillcolor(BLACK);
		solidrectangle(x2 * 25, y2 * 25, x2 * 25 + 25, y2 * 25 + 25);
		map[y2][x2] = 0;
		bullet->state = 0;
		return;
	}
	else if (map[y1][x1] == 2 && map[y2][x2] == 2)   //子弹碰到不可消除墙，重新绘制白墙图片，否则墙上会有弹坑，并且令子弹状态为0
	{
		putimage(x1 * 25, y1 * 25, &Wall2);
		putimage(x2 * 25, y2 * 25, &Wall2);
		bullet->state = 0;
		return;
	}
	else if (map[y1][x1] == 2 && map[y2][x2] != 2)
	{
		putimage(x1 * 25, y1 * 25, &Wall2);
		bullet->state = 0;
		return;
	}
	else if (map[y1][x1] != 2 && map[y2][x2] == 2)
	{
		putimage(x2 * 25, y2 * 25, &Wall2);
		bullet->state = 0;
		return;
	}
	if (map[y1][x1] == 4 && map[y2][x2] == 4)
	{
		flag = 0;
	}
	if (tell)                 //如果tell 不为0   为我方坦克子弹碰撞检测
	{
		if ((map[y1][x1] >= 100 && map[y1][x1] <= 109) || (map[y2][x2] >= 100 && map[y2][x2] <= 109))
		{
			PlaySound(_T("res/hit.wav"), NULL, SND_FILENAME | SND_ASYNC);
			setfillcolor(BLACK);
			TANK* Tank = NULL;
			bullet->state = 0;
			if (map[y1][x1] >= 100 && map[y1][x1] <= 109)
			{
				Tank = map[y1][x1] - 100 + tank;
			}
			else if (map[y2][x2] >= 100 && map[y2][x2] <= 109)
			{
				Tank = map[y2][x2] - 100 + tank;
			}
			Tank->state = 0;
			map_par(Tank, 0);
			enemyAlive--;
			putTankBoom(Tank->tank_x, Tank->tank_y);
			solidrectangle(Tank->tank_x * 25, Tank->tank_y * 25, Tank->tank_x * 25 + 50, Tank->tank_y * 25 + 50);
		}
	}
	else                         //如果tell为0  为敌方坦克检测
	{
		if ((map[y1][x1] == 200 && map[y1][x1] == 200) || (map[y2][x2] == 200 && map[y2][x2] == 200))
		{
			bullet->state = 0;
			map_par(tank, 0);
			enemyAlive--;
			tank->state = 0;
			putTankBoom(tank->tank_x, tank->tank_y);
			flag = 0;
			return;
		}
		else if ((map[y1][x1] >= 100 && map[y1][x1] <= 109) || (map[y2][x2] >= 100 && map[y2][x2] <= 109))
		{
			bullet->state = 0;
		}
	}
	if (bullet->state == 1)
	{
		setfillcolor(WHITE);
		solidcircle(bullet->bullet_x, bullet->bullet_y, 2);
	}
}

// ******************************* 坦克移动控制 *****************************
void allTankMove(TANK* tank, DIRECTION direction, IMAGE* img, int n)
{
	switch (direction)
	{                                   //坦克向前
	case UP:
		if (tank->direction == UP && (tank->tank_y - 1) >= 0 && map[tank->tank_y - 1][tank->tank_x] == 0 && map[tank->tank_y - 1][tank->tank_x + 1] == 0)
		{
			tankMove(tank, UP, img, n);
		}
		else if (tank->direction != UP)
		{
			tank->direction = UP;
			putimage(tank->tank_x * 25, tank->tank_y * 25, img);
		}
		break;                                       //坦克向后
	case DOWN:
		if (tank->direction == DOWN && (tank->tank_y + 2) <= 25 && map[tank->tank_y + 2][tank->tank_x] == 0 && map[tank->tank_y + 2][tank->tank_x + 1] == 0)
		{
			tankMove(tank, DOWN, img, n);
		}
		else if (tank->direction != DOWN)
		{
			tank->direction = DOWN;
			putimage(tank->tank_x * 25, tank->tank_y * 25, img);
		}
		break;                                           //坦克向左
	case LEFT:
		if (tank->direction == LEFT && (tank->tank_x - 1) >= 0 && map[tank->tank_y][tank->tank_x - 1] == 0 && map[tank->tank_y + 1][tank->tank_x - 1] == 0)
		{
			tankMove(tank, LEFT, img, n);
		}
		else if (tank->direction != LEFT)
		{
			tank->direction = LEFT;
			putimage(tank->tank_x * 25, tank->tank_y * 25, img);
		}
		break;                                               //坦克向右
	case RIGHT:
		if (tank->direction == RIGHT && (tank->tank_x + 2) <= 25 && map[tank->tank_y][tank->tank_x + 2] == 0 && map[tank->tank_y + 1][tank->tank_x + 2] == 0)
		{
			tankMove(tank, RIGHT, img, n);
		}
		else if (tank->direction != RIGHT)
		{
			tank->direction = RIGHT;
			putimage(tank->tank_x * 25, tank->tank_y * 25, img);
		}
		break;
	}
}
//*********************   游戏开始控制我方坦克  ********************
void gameStart()
{
	srand((unsigned)time(NULL));
	int times = 0;                            //记录当前程序的休眠次数
	int enemyTotal = 0;
	int enemyAlive = 10;
	//PlaySound(TEXT("res/background.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	//***********************  我方坦克 ********************
	TANK myTankMove;                              //己方坦克
	BULLET myBulletMove;                           //己方子弹
	IMAGE myTank_img[4];
	loadimage(&myTank_img[UP], _T("res/tank_up.jpg"), 50, 50);
	loadimage(&myTank_img[DOWN], _T("res/tank_down.jpg"), 50, 50);
	loadimage(&myTank_img[LEFT], _T("res/tank_left.jpg"), 50, 50);
	loadimage(&myTank_img[RIGHT], _T("res/tank_right.jpg"), 50, 50);
	myTankMove.tank_x = 8;                           //初始化己方坦克位置
	myTankMove.tank_y = 24;
	myTankMove.direction = UP;
	myTankMove.state = true;
	map_par(&myTankMove, 200);
	putimage(myTankMove.tank_x * 25, myTankMove.tank_y * 25, &myTank_img[myTankMove.direction]);                           //初始化己方坦克方向
	myBulletMove.direction = DIRECTION(myTankMove.direction);
	myBulletMove.state = 0;
	//***************************  敌方坦克 *********************
	TANK enemyTank[ENENMY_TANK_NUMBER];
	BULLET enemyBUllet[ENENMY_TANK_NUMBER];
	IMAGE enemyTank_img[4];
	loadimage(&enemyTank_img[UP], _T("res/enemy_tank_up.jpg"), 50, 50);
	loadimage(&enemyTank_img[DOWN], _T("res/enemy_tank_down.jpg"), 50, 50);
	loadimage(&enemyTank_img[LEFT], _T("res/enemy_tank_left.jpg"), 50, 50);
	loadimage(&enemyTank_img[RIGHT], _T("res/enemy_tank_right.jpg"), 50, 50);
	for (int i = 0; i < ENENMY_TANK_NUMBER; i++)
	{
		enemyTank[i].tank_y = 0;
		if (i % 3 == 0)
		{
			enemyTank[i].tank_x = 0;
		}
		else if (i % 3 == 1)
		{
			enemyTank[i].tank_x = 12;
		}
		else if (i % 3 == 2)
		{
			enemyTank[i].tank_x = 24;
		}
		enemyTank[i].state = true;
		enemyTank[i].direction = DOWN;
		enemyBUllet[i].direction = DIRECTION(enemyTank[i].direction);
		enemyBUllet[i].state = 0;
	}
	for (int i = 0; i < 3; i++)
	{
		map_par(&enemyTank[i], 100 + i);
		putimage(enemyTank[i].tank_x * 25, enemyTank[i].tank_y * 25, &enemyTank_img[DOWN]);
	}
	enemyTotal = 3;
	// ***************   检测键盘事件  *******************
	bool Flag = 1;
	while (1)
	{
		//其他坦克出场
		if (times % 400 == 0 && times != 0 && enemyTotal <= ENENMY_TANK_NUMBER)
		{
			//increase++;
			map_par(&enemyTank[enemyTotal], 100 + enemyTotal);
			putimage(enemyTank[enemyTotal].tank_x * 25, enemyTank[enemyTotal].tank_y * 25, &enemyTank_img[DOWN]);
			enemyTotal++;
		}
		// 控制坦克改变方向 
		if (times % 200 == 0)
		{
			for (int i = 0; i < enemyTotal; i++)
			{
				if (enemyTank[i].state)
				{
					DIRECTION NowDirection;
					if (i % 2 == 0)        //双数坦克攻击我方老巢
					{
						NowDirection = enemyMove(&enemyTank[i], 12, 24);
						allTankMove(&enemyTank[i], NowDirection, &enemyTank_img[NowDirection], 100 + i);
					}
					else                    //单数坦克攻击我方坦克
					{
						NowDirection = enemyMove(&enemyTank[i], myTankMove.tank_x, myTankMove.tank_y);
						allTankMove(&enemyTank[i], NowDirection, &enemyTank_img[NowDirection], 100 + i);
					}
					tankFire(&enemyTank[i], &enemyBUllet[i], false);
				}
			}
		}
		else if (times % 50 == 0)   //控制敌方坦克移动
		{
			for (int i = 0; i < enemyTotal; i++)
			{
				if (enemyTank[i].state)
				{
					allTankMove(&enemyTank[i], DIRECTION(enemyTank[i].direction), &enemyTank_img[enemyTank[i].direction], 100 + i);
				}
			}

		}
		// *********************************   我方坦克移动、射击控制 ****************************
		if (_kbhit())
		{
			char key = _getch();                           //获取键盘输入值
			switch (key)
			{
			case 'w':                                   //坦克向前
			case 'W':
				allTankMove(&myTankMove, UP, &myTank_img[UP], 200);
				break;
			case 's':                                        //坦克向后
			case 'S':
				allTankMove(&myTankMove, DOWN, &myTank_img[DOWN], 200);
				break;
			case 'a':                                           //坦克向左
			case 'A':
				allTankMove(&myTankMove, LEFT, &myTank_img[LEFT], 200);
				break;
			case 'd':                                               //坦克向右
			case 'D':
				allTankMove(&myTankMove, RIGHT, &myTank_img[RIGHT], 200);
				break;
			case 'p':                                                   //暂停游戏，按任意键开始
			case 'P':
				system("pause");
				break;
			case 'j':                                                //射击
			case 'J':
				tankFire(&myTankMove, &myBulletMove, true);
				break;
			}
		}
		for (int i = 0; i < enemyTotal; i++)
		{
			if (enemyBUllet[i].state == 1)            //子弹存在时，更新敌方子弹飞行位置
			{
				bulletMove(&enemyBUllet[i], flag, 0, &myTankMove, enemyAlive);
				if (!flag)
				{
					Flag = 0;
				}
			}
		}
		if (!Flag)
			break;
		if (myBulletMove.state == 1)            //子弹存在时，更新我方子弹飞行位置
		{
			bulletMove(&myBulletMove, flag, 1, enemyTank, enemyAlive);
			if (!flag)
			{
				break;

			}
		}
		if (enemyAlive == 0)
			break;
		times++;
		Sleep(15);
	}
}
int main()
{
	initgraph(650, 650);                  //初始化界面
	outputPage1();
	outputPage2();
	gameStart();
	if (!flag)
	{
		putGameOver();
	}
	else
	{
		victory();
	}
	system("pause");
	closegraph();
	return 0;
}