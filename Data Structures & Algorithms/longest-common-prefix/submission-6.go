func longestCommonPrefix(strs []string) string {

	if len(strs) == 0 {
		return ""
	}

	for i, v := range strs[0] {
		for _,s := range strs[1:] {
			if (i >= len(s)) || byte(v) != s[i]{
				return strs[0][:i]
			}
		}
	}

	return strs[0]
}
