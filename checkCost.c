
//RGB Type
typedef struct{
	long red;
	long green;
	long blue;
	int cost;
}RGB;


int checkCost(long r, long g, long b){
	int x = -1;
	//HEURISTIC TABLE
	RGB HTable[25];
	HTable[0].red=0;HTable[0].green=50;HTable[0].blue=0;
	HTable[1].red=50;HTable[1].green=0;HTable[1].blue=0;
	HTable[4].red=50;HTable[4].green=50;HTable[4].blue=0;
	HTable[5].red=0;HTable[5].green=0;HTable[5].blue=50;
	HTable[6].red=50;HTable[6].green=100;HTable[6].blue=0;
	HTable[7].red=100;HTable[7].green=50;HTable[7].blue=0;
	HTable[8].red=0;HTable[8].green=50;HTable[8].blue=50;
	HTable[9].red=50;HTable[9].green=0;HTable[9].blue=50;
	HTable[10].red=100;HTable[10].green=100;HTable[10].blue=0;
	HTable[11].red=0;HTable[11].green=100;HTable[11].blue=50;
	HTable[13].red=100;HTable[13].green=0;HTable[13].blue=50;
	HTable[14].red=50;HTable[14].green=50;HTable[14].blue=50;
	HTable[16].red=50;HTable[16].green=100;HTable[16].blue=50;
	HTable[17].red=100;HTable[17].green=50;HTable[17].blue=50;
	HTable[18].red=0;HTable[18].green=50;HTable[18].blue=100;
	HTable[20].red=50;HTable[20].green=0;HTable[20].blue=100;
	HTable[23].red=0;HTable[23].green=100;HTable[23].blue=100;
	HTable[24].red=100;HTable[24].green=0;HTable[24].blue=100;
	for (int i=0;i<=24;i++){
			if((i!=2) && (i!=3) && (i!=12) && (i!=15) && (i!=19) && (i!=21) && (i!=22)){
				int range;
				if(i==14){//pengecualian untuk abu2
				 	range = 5;
				} else {
					range = 25;
				}
				if((r <= HTable[i].red + range) && (r >= HTable[i].red - range) && (g >= HTable[i].green - range) && (g <= HTable[i].green + range) && (b >= HTable[i].blue - range) && (b <= HTable[i].blue + range)){
					x = i;
					break;
				}
			}
	}
	return x;

}
