func getConcatenation(nums []int) []int {
	var res = make([]int, 0, len(nums) * 2)

	res = append(res, nums...)
	res = append(res, nums...)
	return res 
    
}
