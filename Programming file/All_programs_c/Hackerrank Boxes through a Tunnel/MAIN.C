#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

typedef struct boxes
{
    int length[100];
    int width[100];
    int height[100];
} box;

//typedef struct box box;

int get_volume() {


    int n, i, x, p=1;
    //int *volume=&p;
    int volume[i];
    box;
    box *boxes = malloc(n * sizeof(box));

    for(int i = 0; i < n; i++)
    {
      volume[i] = p * (boxes[i].length) * (boxes[i].width) * (boxes[i].height);
      //x= vloume[i];
     return volume[i];
    }


}

int is_lower_than_max_height() {
    int i, n;
    box;
    box *boxes = malloc(n * sizeof(box));
     for(int i = 0; i < n; i++)
    {
        if(boxes[i].height < 41)
        {
            get_volume(boxes[i]);
        }
        else return 0;
    }

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}





/*

#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

struct box
{
	/**
	* Define three fields of type int: length, width and height

};

typedef struct box box;

int get_volume(box b) {
	/**
	* Return the volume of the box

}

int is_lower_than_max_height(box b) {
	/**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise

}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}

*/
