// Debug the code. List all triplets in array that sums to X.
// int tripletSumToX(int input[], int size, int x){
// 	int triplets = 0;
// 	for(int i=0; i<size; i++){
// 		for(int j=i; j<size; j++){
// 			for(int k=j; k<size; k++){
// 				if(input[i] + input[j] + input[k] == x) triplets++;
// 			}
// 		}
// 	}
// 	return triplets;
// }

int tripletSumToX(int input[], int size, int x){
	int triplets = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){    // Did j = i+1
			for(int k=j+1; k<size; k++){    // Did k = j+1
				if(input[i] + input[j] + input[k] == x) triplets++;
			}
		}
	}
	return triplets;
}