func twoSum(nums []int, target int) []int {
    valmap := make(map[int]int)

    for i, val := range nums {
        diff := target - val

        if j, exists := valmap[diff]; exists {
            return []int{j, i}
        }

        valmap[val] = i
    }

    return []int{}
}