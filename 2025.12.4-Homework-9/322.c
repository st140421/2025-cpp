#include <stdio.h>
#include <stdlib.h>

struct Point{
    int x;
    int y;
};

int main(int argc, char **argv) {
   
    int n = 0;
    scanf("%d",&n);

    struct Point*  pnts = malloc(n * sizeof(struct Point));
    if (pnts == NULL){return 1;}
    
    for(int i = 0;i<n;++i){
        scanf("%d %d",&pnts[i].x,&pnts[i].y);
    }

    int maxpnti = 0;
    int maxdist = pnts[0].x*pnts[0].x+pnts[0].y*pnts[0].y;;
    for(int i = 0;i<n;++i){
        int dist = pnts[i].x*pnts[i].x+pnts[i].y*pnts[i].y;
        if(dist>maxdist){
            maxdist = dist;
            maxpnti = i;
        }
        
    } 

    printf("%d %d\n",pnts[maxpnti].x,pnts[maxpnti].y);

    free(pnts);
    return 0;
}