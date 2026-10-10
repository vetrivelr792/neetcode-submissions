
func isAnagram(s string, t string) bool {

if(len(s) != len(t)){

	return false
}

var sMap = make(map[byte]int)

for i := 0; i < len(s); i++{
	sMap[s[i]]++
	sMap[t[i]]--
}

for _,count := range sMap {
	if count != 0 {
		return false
	}
}
return true
}
