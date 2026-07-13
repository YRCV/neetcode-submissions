class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        # input: string and int for k
        # output: int
        # start, end = 0
        # susbtring is valid if window size - k = highest freq
        start = 0
        state = {}
        longest_sub = 0

        for end in range(len(s)):
            state[s[end]] = state.get(s[end], 0) + 1

            while (end - start + 1 - max(state.values())) > k:
                state[s[start]] -= 1
                if state[s[start]] == 0:
                    del state[s[start]]
                start += 1

            longest_sub = max(longest_sub, end - start + 1)

        return longest_sub
