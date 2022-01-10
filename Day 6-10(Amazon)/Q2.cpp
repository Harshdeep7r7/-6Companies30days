 int longestMountain(vector<int>& arr) {

        int n=arr.size();

        int max_len=0;

        int inc=1;


        for(int i=1;i<n-1;i++)
        {

             if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1])){

                  int k=i;
                  while(i<n-1&&(arr[i]>arr[i+1]))
                  i++;

                   max_len=max(max_len,i-k+1+inc);
                   inc=1;
             }
             else
             {
                 inc=arr[i]>arr[i-1]?inc+1:1;
             }
        }

        return max_len;

    }
