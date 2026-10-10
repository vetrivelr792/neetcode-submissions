func longestCommonPrefix(strs []string) string {

	if len(strs) == 0 {
		return ""
	}
    
	res := ""

	for i, v := range strs[0] {
		for _,s := range strs {
			if (i >= len(s)) || byte(v) != s[i]{
				return res
			}
		}
		res += string(v)
	}

	return res
}
