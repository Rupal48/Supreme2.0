// Debug the code. List all pairs in array that sums to X.
// int pairSumToX(int input[], int size, int x){
// 	int pairs = 0;
// 	for(int i=0; i<size; i++){
// 		for(int j=i; j<size; j++){
// 			if(input[i] + input[j] == x) pairs++;
// 		}
// 	}
// 	return pairs;
// }

int pairSumToX(int input[], int size, int x){
	int pairs = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){ // Just did j = i+1 instead of j=i
			if(input[i] + input[j] == x) pairs++;
		}
	}
	return pairs;
}