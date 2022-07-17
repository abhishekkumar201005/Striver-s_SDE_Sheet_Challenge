// #include <stack>
// void insert(stack<int> &stack, int temp)
// {
//     if (stack.empty() || stack.top() <= temp)
//     {
//         stack.push(temp);
//         return;
//     }
//     int t = stack.top();
//     stack.pop();
//     insert(stack, temp);
//     stack.push(t);
// }
// void sortStack(stack<int> &stack)
// {
//     // Write your code here
//     if (stack.empty())
//         return;
//     int temp = stack.top();
//     stack.pop();
//     sortStack(stack);
//     insert(stack, temp);
// }