# Operations

1. Start with this code:

```
#include <iostream>
#include <vector>
  
int main() {
  
  std::vector<double> delivery_order;
  
  delivery_order.push_back(8.99);
  delivery_order.push_back(3.75);
  delivery_order.push_back(0.99);
  delivery_order.push_back(5.99);
  
  // Calculate the total using a for loop:
  
  double total = 0.0;
    
  
}
```

2. In the above code, there is a ```double``` vector named ```delivery_order``` that is storing the prices of some food items.

	There is also a ```double``` variable named ```total``` that’s already declared and initialized.

	Write a ```for``` loop that iterates through the ```delivery_order``` vector (from ```0``` to ```delivery_order.size()```). And add each order to ```total``` during each iteration.

3. Output the final ```total``` using ```std::cout```.

Example code can be found in the [delivery.cpp](https://github.com/keldavis/c-plus-plus-practice/blob/master/foundations/7.%20Vectors/Operations/operations.cpp) file.