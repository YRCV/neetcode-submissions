class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []

        for token in tokens:
            if (token == "+" or token == "-" or token == "*" or token == "/"):
                right = int(stack.pop())
                left = int(stack.pop())

                if token == "+":
                    stack.append(left + right)
                elif token == "-":
                    stack.append(left - right)
                elif token == "*":
                    stack.append(left * right)
                elif token == "/":
                    stack.append(left / right)
            else:
                stack.append(int(token))
            
        return int(stack[-1])