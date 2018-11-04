#ifndef GAMELIB_H_INCLUDED
#define GAMELIB_H_INCLUDED

/**********************************
*�ļ�����GameLib.h
*��    ����������Ϸ�г��õ�ϵͳ����������������ɫ�ȡ�����
*�����ˣ�Misaki
*��    �ڣ�2018.1.16
*��    ����0.1
*�ٷ�QQ��1761607418
**********************************/
#include <stdio.h>
#include <windows.h>
/*���ÿ���̨���ڵı���*/
void SetTitle(char *title);
/*�������ֵ�ǰ��ɫ�ͱ���ɫ*/
/*
*0-��ɫ��1-��ɫ��2-��ɫ��3-ǳ��ɫ��4-��ɫ��5-��ɫ��6-��ɫ��7-��ɫ��8-��ɫ��9-����ɫ��
*10-����ɫ��11-��ǳ��ɫ��12-����ɫ��13-����ɫ��14-����ɫ��15-����ɫ
*/
void SetColor(int foreColor,int backColor);
/*���ù���λ��*/
void SetPosition(int x,int y);
/*��xy���꿪ʼ���rowCount��*/
void Clean(int x,int y,int rowCount);

#endif // GAMELIB_H_INCLUDED