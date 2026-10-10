func getConcatenation(nums []int) []int {
	var res = make([]int, len(nums) * 2)

	for i:=0; i < len(nums); i++ {
		res[i] = nums[i]
		res[len(nums) + i] = nums[i]
	}
	return res 
    
}
