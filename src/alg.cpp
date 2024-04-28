// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count = 0;
  int left = 0;
  int right = size - 1;

  while (left <= right) {
      int mid = left + (right - left) / 2;

      if (arr[mid] == value) {
          count++;
          int pos = mid - 1;

          while (pos >= 0 && arr[pos] == value) {
              count++;
              pos--;
          }

          pos = mid + 1;

          while (pos < size && arr[pos] == value) {
              count++;
              pos++;
          }

           break;
      } else if (arr[mid] < value) {
          left = mid + 1;
      } else {
          right = mid - 1;
      }
  }
  return count;
  return 0; 
}
