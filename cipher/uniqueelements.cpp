
int countDistinctArtifacts(vector<int>& ids) {
    int n=ids.size();
int i=0;

int count=0;
for(int i=0;i<n;i++){
    int j=i+1;
    if(nums[i]!=nums[j]){
        count++;
        j++;
    }else{
          continue;
    }
}
return count;
}