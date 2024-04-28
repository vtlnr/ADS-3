// Copyright 2021 NNTU-CS
int cbinsearch(int* arr, int size, int value) {
  int cnt = 0;
  int lft = 0;
  int rght = size - 1;
  while (lft <= rght) {
      int mid = lft + (rght - lft) / 2;
      if (arr[mid] == value) {
          cnt++;
          int ps = mid - 1;
          while (ps >= 0 && arr[ps] == value) {
              cnt++;
              ps--;
          }
          ps = mid + 1;
          while (ps < size && arr[ps] == value) {
              cnt++;
              ps++;
          }
          return cnt;
      } else if (arr[mid] < value) {
          lft = mid + 1;
      } else {
          rght = mid - 1;
      }
  }
  if (cnt == 0) {
      return 0;
  }
  return cnt;
}
