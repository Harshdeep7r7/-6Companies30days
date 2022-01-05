string encode(string src)
{
  //Your code here
  string sol="";
  int cnt=1;

  for(int i=0;i<src.length();i++)
  {
      cnt=1;

      sol+=src[i];

      while(i+1<src.length()&&(src[i]==src[i+1]))
      {
          i++;
          cnt++;
      }

      sol+=to_string(cnt);
  }

  return sol;
}
